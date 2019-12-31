#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 4> arr = {2, 6, 3, 9};
	cout << arr.front() << endl;
	cout << arr.back() << endl;
	//arr.fill(-1);
	/*
	for (auto item : arr)
	{
		cout << item << endl;
	}
	*/
	/*
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	*/
	/*
	try 
	{
		cout << arr.at(9) << endl;
	}
	catch (const std::exception & ex)
	{
		cout << ex.what() << endl;
	}
	*/

}
