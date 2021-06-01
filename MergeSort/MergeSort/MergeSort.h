#include <vector>

class MergeSort
{
private:
	void merge(std::vector<int> &vctr, int left, int mid, int right);
public:
	void printResult(std::vector<int> &vctr);
	void mergeSort(std::vector<int> &vctr, int left, int right);
};