#ifndef __CONF_HPP

#define __CONF_HPP



#include <sys/stat.h>

#include <unistd.h>

#include <strings.h>



#include <map>

#include <string>

#include <fstream>

#include <map>

#include <vector>

using namespace std;



namespace PWRD

{



	using std::string;

	class Conf

	{

		public:

			typedef string section_type;

			typedef string key_type;

			typedef string value_type;

		private:

			time_t mtime;

			struct stringcasecmp

			{

				bool operator() (const string &x, const string &y) const { return strcasecmp(x.c_str(), y.c_str()) < 0; }

			};

			static Conf instance;

			typedef std::map<key_type, value_type, stringcasecmp> section_hash;

			typedef std::map<section_type, section_hash, stringcasecmp> conf_hash;

			conf_hash confhash;

			string filename;

			Conf() : mtime(0) { }

			void reload()

			{

				struct stat st;

				for ( stat(filename.c_str(), &st); mtime != st.st_mtime; stat(filename.c_str(), &st) )

				{

					mtime = st.st_mtime;

					std::ifstream ifs(filename.c_str());

					string line;

					section_type section;

					section_hash sechash;

					if (!confhash.empty()) confhash.clear();

					while (std::getline(ifs, line))

					{

						const char c = line[0];

						if (c == '#' || c == ';') continue;

						if (c == '[')

						{

							string::size_type start = line.find_first_not_of(" \t", 1);

							if (start == string::npos) continue;

							string::size_type end   = line.find_first_of(" \t]", start);

							if (end   == string::npos) continue;

							if (!section.empty()) confhash[section] = sechash;

							section = section_type(line, start, end - start);

							sechash.clear();

						} else {

							string::size_type key_start = line.find_first_not_of(" \t");

							if (key_start == string::npos) continue;

							string::size_type key_end   = line.find_first_of(" \t=", key_start);

							if (key_end == string::npos) continue;



							string::size_type val_start = line.find_first_of("=", key_end);

							if (val_start == string::npos) continue;

							val_start = line.find_first_not_of(" \t", val_start + 1);

							if (val_start == string::npos) continue;



							string::size_type val_end = line.find_last_not_of(" \t\r");

							if (val_end == string::npos) continue;

							if (val_end < val_start) continue;



							sechash[key_type(line, key_start, key_end - key_start)] = value_type(line, val_start,val_end - val_start + 1);

						}

					}

					if (!section.empty()) confhash[section] = sechash;

				}

			}

		public:

			value_type find(const section_type &section, const key_type &key)

			{

				return confhash[section][key];

			}

			value_type put(const section_type &section, const key_type &key, const value_type &value)

			{

				value_type oldvalue = confhash[section][key];

				confhash[section][key] = value;

				return oldvalue;

			}

			void getkeys(const section_type &section, std::vector<key_type> &keys)

			{

				keys.clear();

				section_hash h = confhash[section];

				for( section_hash::const_iterator it=h.begin(); it!=h.end(); ++it )

				{

					keys.push_back( (*it).first );

				}

			}

			static Conf *GetInstance(const char *file = NULL)

			{

				if (file && access(file, R_OK) == 0)

				{

					instance.filename = file;

					instance.reload();

				}

				return &instance; 

			}



			// 用于构造临时配置。

			explicit Conf(const char * file)

				: mtime(0), filename(file)

			{

				reload();

			}

	};	





}



#endif



