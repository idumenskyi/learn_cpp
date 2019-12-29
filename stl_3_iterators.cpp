#include <iostream>
#include <vector>
//#include <list>
using namespace std;

int main()
{
	/*
	int arr[] = { 3, 7, 5 };
	cout << arr[1] << endl; // access to the second item of array
	cout << *(arr + 1) << endl; // access to the second item of array using pointer
	*/
	
	vector<int> myVector = { 5, 98, 45, 32, 90 };
	//cout << myVector[1] << endl;
	/*
	vector<int>::iterator it;
	it = myVector.begin();
	//*it = 800;
	//it++; //98
	it += 2;
	it -= 2;
	*/
	/*
	vector<int>::iterator it = myVector.begin();
	//cout << *(it + 3) << endl;
	advance(it, 3); // iterator, step
	cout << *it << endl;
	*/
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	cout << endl << "insert" << endl << endl;

	vector<int>::iterator it = myVector.begin();
	advance(it, 4);
	myVector.insert(it, 1000);

		

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	cout << endl << "erase" << endl << endl;

	vector<int>::iterator itErase = myVector.begin();
	
	myVector.erase(itErase, itErase+2);


	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	/*
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	/*
	/*
	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}
	*/
	/*
	for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
	{
		*i = 3; //error
		cout << *i << endl;
	}
	*/
	return 0;
	
}
