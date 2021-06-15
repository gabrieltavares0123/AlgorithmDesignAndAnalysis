#include <iostream>
#include "QuickSort.h"

int main()
{
    QuickSort* sort = new QuickSort();
    std::vector<int> vctr{ 10, 27, 32, 50, 100, 110, 101, 86, 40, 60, 91, 90, 84, 66, 666  };
    sort->partition(vctr, 0, vctr.size() - 1);

    for (int i = 0; i < vctr.size(); i++)
    {
        std::cout << vctr[i] << " ";
    }
}
