#include <PKListService.hpp>

namespace PWRD{

	namespace FC{

		/*=========================================================
		 * @protected
		 =========================================================*/
		int PKListService::init(){

			return 1;

		}

		int PKListService::fini(){

			return 1;

		}

		/*=========================================================
		 * @public
		 =========================================================*/

		int PKListService::Process(boost::shared_ptr<C2S_PKList> _item UNUSED, EventHandler* _handler){

			Note("PKList Request: roleid=%s, pkrequest=%s", _item->roleid().c_str(), _item->request().c_str());

			//int roleid = StringTool::Str2Int(_item->roleid());

			//S2C_PKList
			S2C_PKList* pklist = new S2C_PKList();

			assert(NULL != pklist);

			//PKList
			boost::shared_ptr<String> str(new String(Element_ELEMENT_TYPE_PKLIST_TYPE, _item->request()));

			Element* element = str->Get();

			//Note("================ENTITYSIZE: %d=============", element->entity_size());

			//Add PK_Property
			for(int index = 0; index < element->entity_size(); index++){

				Entity entity = element->entity(index);

				int level = StringTool::Str2Int(entity.key());

				int num = entity.total();

				//Note("================NUM: %d=============", num);

				GamerList list = Registry::Get(level, num, false);

				//Query Registry
				for(size_t step = 0; step < list.size(); step++){

					boost::shared_ptr<Gamer_t> gamer = list[step];

					if(NULL != gamer){

						PKProperty* pkpro = pklist->add_pkpro();

						assert(NULL != pkpro);

						boost::shared_ptr<Player> player = PlayerCache::Get(gamer->roleid);

						pkpro->set_roleid(gamer->roleid);
						pkpro->set_rolename(player->GetRoleName());
						pkpro->set_pklevel(player->GetPKLevel());
						pkpro->set_pkexp(player->GetPKLevel());
						pkpro->set_ranklevel(player->GetRankLevel());
						pkpro->set_rankexp(player->GetRankExp());
						pkpro->set_equips(player->GetEquips().Serialize());
						pkpro->set_items(player->GetItems().Serialize());
						pkpro->set_buffs(player->GetBuffs().Serialize());


					} //if NULL

				} //for step in num

			} //for index in elements

			Head head;

			head.type = PKLIST;

			Note("=====================TYPE: %d==================", head.type);

			head.version = 1;

			head.length = pklist->ByteSize();

			char* buf = new char[pklist->ByteSize()];

			*buf = 0;

			pklist->SerializeToArray(buf, head.length);

			if(ESTABLISHED == _handler->Connected()){

				_handler->Send(head, buf, head.length);

			}

			delete pklist;

			delete buf;

			return 1;

		}

	}

}
