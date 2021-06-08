#include <iostream>
#include "QuickSort.h"

int main()
{
    QuickSort* sort = new QuickSort();
    std::vector<int> vctr{ 10, 2, 9, 15, 6, 0, 10, 8, 4, 15, 14, 0, 8, 6, 6  };
    sort->partition(vctr, 0, vctr.size() - 1);

    for (int i = 0; i < vctr.size(); i++)
    {
        std::cout << vctr[i] << " ";
    }
}
