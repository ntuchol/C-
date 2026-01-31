// Repository.hpp
//
// In-memory database, map
//
// 2014-3-21 DD test

#include <map>
#include <string>

class Repository
{
public: // For convenience
	static std::map<int, std::string> db;

	Repository();

	void add (int id, std::string name); // Throws -1
	
	static std::size_t NumberOfRecords();

};
