#include "BubbleSort.h"

int main()
{
    std::vector<int> arr{ 64, 34, 25, 12, 22, 11, 90 };

    BubbleSort* sort = new BubbleSort();

    sort->bubbleSort(arr);
    std::cout << "Sorted array: \n";
    sort->printResult(arr);
    return 0;
}

