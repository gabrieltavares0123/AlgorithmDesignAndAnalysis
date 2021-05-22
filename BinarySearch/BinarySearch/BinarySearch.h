#include <iostream>
#include <vector>

using namespace std;

class BinarySearch {
private:
public:
	int binarySearchRecusive(vector<int> vctr, int left, int right, int target);
	int binarySearchIterative(vector<int> vctr, int target);
};