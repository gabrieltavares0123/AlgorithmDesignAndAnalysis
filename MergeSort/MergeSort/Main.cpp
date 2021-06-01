#include <iostream>
#include "MergeSort.h"

int main()
{
    MergeSort* sort = new MergeSort();

    std::vector<int> vctr{ 12, 11, 13, 5, 6, 7 };

    std::cout << "Given array is " << std::endl;
    sort->printResult(vctr);

    sort->mergeSort(vctr, 0, vctr.size()-1);

    std::cout << std::endl << "Sorted array is " << std::endl;
    sort->printResult(vctr);

    return 0;
}
