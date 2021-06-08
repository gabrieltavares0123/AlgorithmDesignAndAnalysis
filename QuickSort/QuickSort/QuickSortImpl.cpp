#include "QuickSort.h"
#include <iostream>

void QuickSort::swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void QuickSort::partition(std::vector<int>& vctr, int first, int last)
{
	int pivot = vctr[first];
	int i = first + 1;
	int j = last;

	while (j >= i)
	{
		if (vctr[i] <= pivot)
		{
			i++;
		} 
		else if (vctr[j] > pivot)
		{
			j--;
		}
		else
		{
			this->swap(vctr[i], vctr[j]);
			i++;
			j--;
		}
	}
	this->swap(vctr[first], vctr[j]);
	std::cout << std::endl;
	std::cout << j << std::endl;
}

void QuickSort::quickSort(std::vector<int>& vctr, int first, int last)
{
	if (first < last)
	{
		// For now i don't know the correct pivot approach. Maybe i need to change the partition approach. 
		//int pivot = (first + last) / 2;
		//partition(vctr, first, last);
		//this->quickSort(vctr, first, pivot);
		//this->quickSort(vctr, pivot + 1, last);
	}
}