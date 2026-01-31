// StaticMap.cpp
//
// Creating a statie map repository
//
// 2014-3-21 DD test
//

#include <iostream>
#include "Repository.hpp"

int main()
{
	try 
	{
		Repository db;
	
		// Seat number and name
		db.add(1, "dd");
		db.add(2, "ap");
		db.add(3, "andy");
		db.add(4, "Erwin");

		std::cout << "Number of students: " << Repository::NumberOfRecords() << std::endl;
	
		Repository dbNew;
	
		// Seat number and name
		dbNew.add(900, "Vladimir");
		dbNew.add(1000, "Barack");
		dbNew.add(1600, "Niels");
	dbNew.add(1600, "Niels"); //!!!!!!!!!!!!
		std::cout << "Number of students: " << Repository::NumberOfRecords() << std::endl;
	}
	catch(int e)
	{

		std::cout << e << std::endl;
	}

	return 0;
}
