#pragma once
#include <iostream>
template<typename T>
int compare(T a, T b)
{
	if (a < b)
	{
		return 1;
	}
	if (a == b)
	{
		return 0;
	}
	return -1;
}
template<typename T>
void bubbleSort(T* a, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (a[j] < a[j + 1])
			{
			}
			else
			{
				T temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}
template<typename T>
void printArray(T* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << a[i] << " " << std::endl;
	}
}