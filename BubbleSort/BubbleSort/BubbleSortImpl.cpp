#include "BubbleSort.h"

using namespace std;

void BubbleSort::swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void BubbleSort::bubbleSort(std::vector<int> &vctr)
{
	for (int i = 0; i < vctr.size()-1; i++)
	{
		for (int j = 0; j < vctr.size() -i -1; j++)
		{
			if (vctr[j] > vctr[j+1])
			{
				swap(vctr[j], vctr[j+1]);
			}
		}
	}
}

void BubbleSort::printResult(std::vector<int> const &vctr)
{
	for (auto nmbr : vctr)
	{
		cout << nmbr << endl;
	}
}