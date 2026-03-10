#pragma once
#include<iostream>
using namespace std;

template <class T>

class SelectionSort {

	int size;
	T* arr;

public:
	SelectionSort(int s ,T *ar) {
		size = s;
		arr = ar;
	}


	void display() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void sort() {
		for (int i = 0; i < size-1; i++) {

			int min = i;
			for (int j = i + 1; j < size; j++) {

				if (arr[j] < arr[min]) {
					min = j;
				}
			}
			swap(arr[i], arr[min]);
		}
	}


};



