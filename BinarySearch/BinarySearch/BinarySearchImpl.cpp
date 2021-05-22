#include "BinarySearch.h"

int BinarySearch::binarySearchRecusive(vector<int> vctr, int left, int right, int target)
{
	if (right >= left)
	{
		int mid = left + ((right - left) / 2);

		if (vctr.at(mid) == target)
		{
			return mid;
		}
		
		if (vctr.at(mid) > target)
		{
			right = mid - 1;
			return binarySearchRecusive(vctr, left, right, target);
		}
		else
		{
			left = mid + 1;
			return binarySearchRecusive(vctr, left, right, target);
		}
	}

	return -1;
}

int BinarySearch::binarySearchIterative(vector<int> vctr, int target)
{
	int min = 0;
	int max = vctr.size() - 1;

	while (min < max)
	{
		int mid = (min + max) / 2;

		if (vctr.at(mid) == target)
		{
			return mid;
		}


		if (vctr.at(mid) < target)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
	}

	return -1;
}