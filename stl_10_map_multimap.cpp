#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map <string, int> myMap;
	multimap <string, int> myMultimap;
	myMap.emplace("String 1", 1);
	myMap.emplace("String 2", 2);
	myMap.emplace("String 3", 3);
	myMultimap.emplace("String 1", 1);
	myMultimap.emplace("String 1", 1);
	myMultimap.emplace("String 2", 2);
	cout << myMap["String 3"] << endl;
	try
	{
		myMap.at("String") = 3;
	}
	catch (const std::exception & ex)
	{
		cout << ex.what() << endl;
		cout << "key is missing in map" << endl;
	}
	/*
	pair<int, string> p(1, "phone");
	cout << p.first << endl;
	cout << p.second << endl;
	*/
	/*
	map<int, string> myMap;
	myMap.emplace(3, "Display");
	myMap.insert(make_pair(1, "phone"));
	myMap.insert(pair<int, string>(2, "notebook"));
	myMap.emplace(14, "Keyboard");
	cout << myMap[3] << endl;
	*/
	/*
	auto it = myMap.find(5);
	
	if (it != myMap.end())
	{
		cout << it->second << endl;
	}
	*/
	
}
