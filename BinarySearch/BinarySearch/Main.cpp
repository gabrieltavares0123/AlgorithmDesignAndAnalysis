#include "BinarySearch.h"

void performBinarySearchRecursive() {
	vector<int> vctr { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	BinarySearch search;
	int target = 29;
	int result = search.binarySearchRecusive(vctr, 0, vctr.size() - 1, target);

	cout << ">>>>>>>>>>>>>>>.....Binary search recursive.....<<<<<<<<<<<<<<<" << endl;
	cout << "Searching for " << target << "..." << endl;
	if (result != -1) {
		cout << "Result: " << result << endl;
	}
	else
	{
		cout << "Can't find " << target << "." << endl;
	}
}

void performBinarySearchIterative() {
	vector<int> vctr { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

	BinarySearch search;
	int target = 53;
	int result = search.binarySearchIterative(vctr, target);

	cout << ">>>>>>>>>>>>>>>.....Binary search iterative.....<<<<<<<<<<<<<<<" << endl;
	cout << "Searching for " << target << "..." << endl;
	if (result != -1) {
		cout << "Result: " << result << endl;
	}
	else
	{
		cout << "Can't find " << target << "." << endl;
	}
}

int main()
{
	performBinarySearchIterative();
	performBinarySearchRecursive();

	return 0;
}