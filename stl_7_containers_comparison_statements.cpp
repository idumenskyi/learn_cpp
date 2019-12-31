#include <iostream>
#include <array>
using namespace std;


int main()
{
	array<int, 4> arr = { 5, 9, 23, 0 };
	array<int, 4> arr1 = { 5, 9, 23, 12 };
	bool result = (arr == arr1);
	//bool result = (arr > arr1);
    cout << result << endl;
}
