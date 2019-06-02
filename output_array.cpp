#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	//int arr[size]{8, 4, 2, 7, 3};
	int arr[size];
	for(int i = 0; i < size; i++){
		arr[i] = i;
	}

	for(int i = 0; i < size; i++){
	cout << arr[i] << endl;
	}
	return 0;
}
