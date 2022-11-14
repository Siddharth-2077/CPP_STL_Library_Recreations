
// Source.cpp - Main file

#include "Map.h"			// Custom Map Mibrary
#include <map>				// C++ STL Map Library
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {
	
	// CUSTOM MAP CLASS TEST:
	cout << "\n CUSTOM MAP CLASS: \n" << endl;
	clock_t timer1 = clock();

	Map<string, string> map;

	map.Insert("Ah", "Hello A");
	map.Insert("ah", "Hello a");
	map.Insert("hh", "Hello h");
	map.Insert("rh", "Hello r");
	map.Insert("ab", "Hello ab");
	map.Insert("ac", "Hello ac");
	map.Insert("ad", "Hello ad");
	map.Insert("ae", "Hello ae");
	map.Insert("af", "Hello af");
	map.Insert("za", "Hello za");
	map.Insert("fa", "Hello fa");
	map.Insert("ia", "Hello ia");
	map.Insert("90", "Hello 90");
	map.Insert("09", "Hello 09");
	map.Insert("21", "Hello 21");
	map.Insert("zz", "Hello zz");

	map.Display();

	if (map.Contains("100")) {
		cout << "\n GetData(\"100\") = " << map.GetData("100") << endl;
	}
	if (map.Contains("zz")) {
		cout << "\n GetData(\"zz\") = " << map.GetData("zz") << endl;
	}

	cout << "\n Time taken: " << (double)(clock()-timer1)/CLOCKS_PER_SEC << " seconds." << endl;
	

	// ====================================================================================== //

	/*
	// C++ STL MAP CLASS TEST:
	cout << "\n C++ STL MAP CLASS: \n" << endl;
	clock_t timer2 = clock();

	std::map<string, string> STLMap;
	
	STLMap.insert(make_pair("Ah", "Hello A"));
	STLMap.insert(make_pair("ah", "Hello a"));
	STLMap.insert(make_pair("hh", "Hello h"));
	STLMap.insert(make_pair("rh", "Hello r"));
	STLMap.insert(make_pair("ab", "Hello ab"));
	STLMap.insert(make_pair("ac", "Hello ac"));
	STLMap.insert(make_pair("ad", "Hello ad"));
	STLMap.insert(make_pair("ae", "Hello ae"));
	STLMap.insert(make_pair("af", "Hello af"));
	STLMap.insert(make_pair("za", "Hello za"));
	STLMap.insert(make_pair("fa", "Hello fa"));
	STLMap.insert(make_pair("ia", "Hello ia"));
	STLMap.insert(make_pair("90", "Hello 90"));
	STLMap.insert(make_pair("09", "Hello 09"));
	STLMap.insert(make_pair("21", "Hello 21"));
	STLMap.insert(make_pair("zz", "Hello zz"));

	// Display the map:
	std::map<string, string>::iterator itr = STLMap.begin();
	cout << " KEY\tDATA" << endl;
	while (itr != STLMap.end()) {
		cout << " " << itr->first << "\t" << itr->second << endl;
		++itr;
	}

	itr = STLMap.find("100");
	if (itr != STLMap.end()) {
		cout << "\n find(\"100\") = " << itr->second << endl;
	}
	itr = STLMap.find("zz");
	if (itr != STLMap.end()) {
		cout << "\n find(\"zz\") = " << itr->second << endl;
	}

	cout << "\n Time taken: " << (double)(clock()-timer2)/CLOCKS_PER_SEC << " seconds." << endl;
	*/

	cout << endl;
	return 0;
}

