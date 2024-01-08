#pragma once
#include<iostream>
#include<algorithm>

template <class T>
class SortArray
{
private:
	T* arr;
	int size;
public:
	SortArray(T* array, int size):arr(array),size(size){}

	void Sort()
	{
		for (int i = 0; i < size - 1; ++i) {
			for (int j = 0; j < size - i - 1; ++j) {
				if (arr[j] < arr[j + 1]) {
					std::swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
	void display()
	{
		std::cout << std::endl;
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
};

