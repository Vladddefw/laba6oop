#include<iostream>
#include"Sorting.h"
using namespace std;

template<class T> T MaxElement(T *arr, int size)
{
	if (size <= 0)
	{
		cout << "size error\n";
		return -1;
	}
	else
	{
		T max = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		return max;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4 };
	int size = sizeof(arr) / sizeof(int); // = 0;
	cout << "max : " << MaxElement<int>(arr, size);

	int intArray[] = { 5,3,2,8,9,1 };
	int intSize = sizeof(intArray) / sizeof(int);

	SortArray<int> intSorted(intArray, intSize);
	intSorted.Sort();
	intSorted.display();
	return 0;
}