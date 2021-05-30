#include <iostream>
#include <vector>

class BubbleSort
{
private:
	void swap(int &x, int &y);
public: 
	void bubbleSort(std::vector<int> &numbersArray);
	void printResult(std::vector<int> const &numbersArray);
};