#include <iostream>
#include <set>
using namespace std;

int main()
{
	//set<int> mySet = {6, 3, 2};
	multiset<int> myMultiset = {7, 8, 9, 3, 2, 8, 7, 3, 10};
	//auto it = mySet.find(8);
	/*
	int value;
	cin >> value;
	if (mySet.find(value) != mySet.end())
	{
		cout << "number " << value << " found" << endl;
	}
	else
	{
		cout << "number " << value << " missing" << endl;
	}
	*/
	/*
	mySet.insert(6);
	mySet.insert(3);
	mySet.insert(2);
	*/
	/*
	for (int i = 0; i < 20; i++)
	{
		mySet.insert(rand() % 10);
	}
	*/
	/*
	mySet.erase(3);
	mySet.insert(4);
	for (auto& item : mySet)
	{
		cout << item << endl;
	}
	*/
	auto it = myMultiset.lower_bound(3);
	auto it1 = myMultiset.upper_bound(3);
	auto it2 = myMultiset.equal_range(2);
	for (auto& item : myMultiset)
	{
		cout << item << endl;
	}
	
	return 0;
}
