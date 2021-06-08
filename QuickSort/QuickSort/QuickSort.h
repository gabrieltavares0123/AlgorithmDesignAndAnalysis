#include <vector>

class QuickSort {
private:
public:
	void swap(int& x, int& y);
	void partition(std::vector<int>& vctr, int first, int last);
	void quickSort(std::vector<int>& vctr, int first, int last);
};