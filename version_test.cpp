/*
 * version_test.cpp
 *
 *  Created on: Apr 6, 2015
 *      Author: Xiangyu
 */

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
	stringstream version;
	version << "GCC version: "
			<< __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__
			<< "\nVersion string:" << __VERSION__;
	cout << version.str() << endl;

	return 0;

}
