#include <iostream>
#include "MergeSort.h"

void MergeSort::printResult(std::vector<int> &vctr)
{
	for (auto item : vctr)
	{
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void MergeSort::merge(std::vector<int> &vctr, int left, int mid, int right)
{
	int sizeLeftVector = mid - left + 1;
	int sizeRightVector = right - mid;

	std::vector<int> tempLeftVector;
	std::vector<int> tempRightVector;

	for (int i = 0; i < sizeLeftVector; i++)
	{
		tempLeftVector.push_back(vctr[left + i]);
	}

	for (int j = 0; j < sizeRightVector; j++)
	{
		tempRightVector.push_back(vctr[mid + 1 + j]);
	}

	int i, j, k;
	i = j = 0;
	k = left;

	while (i < sizeLeftVector && j < sizeRightVector)
	{
		if (tempLeftVector[i] <= tempRightVector[j])
		{
			vctr[k] = tempLeftVector[i];
			i++;
		} 
		else
		{
			vctr[k] = tempRightVector[j];
			j++;
		}
		k++;
	}

	while (i < sizeLeftVector)
	{
		vctr[k] = tempLeftVector[i];
		i++;
		k++;
	}

	while (j < sizeRightVector)
	{
		vctr[k] = tempRightVector[j];
		j++;
		k++;
	}
}

void MergeSort::mergeSort(std::vector<int> &vctr, int left, int right)
{
	if (right > left)
	{
		int mid = left + (right - left) / 2;

		this->mergeSort(vctr, left, mid);
		this->mergeSort(vctr, mid+1, right);
		this->merge(vctr, left, mid, right);
	}
	else
	{
		return;
	}
}