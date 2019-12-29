#include <iostream>
#include <list>
#include <vector>
using namespace std;

template <typename T>
void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}
int main()
{
	list <int> myList = {88, 8, 64, 88, 81, 88, 54, 26, 88, 88, 88};
	PrintList(myList);
	cout << endl << "insert" << endl << endl;
	auto it = myList.begin();
	//++it; // increase index of the list to position from 0 to 1
	advance(it, 2);
	myList.insert(it, 256); 
	PrintList(myList);
	//cout << myList.size() << endl << endl;
	//myList.push_back(7); //  add 7 to the end of the list
	//myList.push_front(121); // add 121 to the begin of the list
	//list <int> ::iterator it = myList.begin(); // or auto it = myList.begin();
	//myList.sort(); // sort list from less to greatest
	//myList.unique();
	//myList.reverse();
	//myList.clear();
	/*
	PrintList(myList);
	cout << endl << "pop_front" << endl << endl;
	myList.pop_front();
	PrintList(myList);
	*/
	/*
	cout << endl << "pop_back" << endl << endl;
	myList.pop_back();
	PrintList(myList);
	*/
	/*
	for (auto i = myList.begin(); i != myList.end(); i++)
	{
		cout << *i << endl;
	}
	return 0;
	*/
}
