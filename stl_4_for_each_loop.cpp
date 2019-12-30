#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); i++)
	{
		cout << *i << endl;
	}
}

int main()
{
	list<int> myList = { 7, 2, 9, 12, 45 };
	//int arr[] = { 7, 2, 9, 12, 45 };
	for (const auto &item: myList)
	{
		//item = -1;
		cout << item << endl;
	}
	
		
	return 0;
    
}
