#include "Header.h"
int main() {


	int size;
	cout << "Enter the size of  integer array " << endl;
	cin >> size;


	cout << "Enter values " << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	SelectionSort<int> s(size, arr);

	s.display();
	cout << "For other data type with same size " << endl;
	cout << "The sorted array is " << endl;
	string* arr2 = new string[size];
	for (int i = 0; i < size; i++) {
		cin >> arr2[i];
	}

	SelectionSort<string> s2(size, arr2);
	s2.display();
}