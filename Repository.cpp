// Repository.cpp
//
// In-memory database, map
//
// 2014-3-21 DD test

#include "Repository.hpp"

// Initialise the static map
std::map<int, std::string> Repository::db = std::map<int, std::string>();

Repository::Repository() {}

void Repository::add (int id, std::string name)
{
		// Precondition: check if id exists

		std::map<int, std::string>::iterator it = db.find(id);
		{
			if (it != db.end())
			{
				//throw std::string("Record " + name + " alredy exists");
				throw -1;

			}

			// Add new recrd
			db.insert(std::pair<int, std::string>(id, name));
		}
}

std::size_t Repository::NumberOfRecords() 
{
	return db.size();
}
