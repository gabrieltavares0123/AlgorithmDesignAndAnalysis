#include <iostream>
#include <chrono>
#include <vector>
#include "BubbleSort.h"
#include "MergeSort.h"

int getVectorSize(int iterationNumber, int vectorSize)
{
    return std::floor(std::pow(2, vectorSize));
}

std::vector<int> getRandomVector(int vectorSize)
{
    std::vector<int> vctr;

    for (int i = 0; i < vectorSize; i++)
    {
        vctr.push_back(rand() % 1000 + 1);
    }

    return vctr;
}

int main()
{
    int startingVectorSize = 2000;
    int iterationsCount = 5;

    BubbleSort* bubbleSort = new BubbleSort();
    MergeSort* mergeSort = new MergeSort();

    // Bubble sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Bubble sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int i = 0; i <= iterationsCount; i++)
    {
        int currentVectorSizeIteration = std::pow(2, i) * startingVectorSize;
        std::vector<int> vctr = getRandomVector(currentVectorSizeIteration);
        std::cout << "Iteration: " << i << " " << "with vector size " << currentVectorSizeIteration << "..." << std::endl;
        
        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        bubbleSort->bubbleSort(vctr);
        // Calculate resulting time in seconds.
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);

        std::cout << "Ended with time: " << duration.count() << "." << std::endl;
        std::cout << std::endl;
    }

    // Merge sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Merge sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    
    for (int j = 0; j <= iterationsCount; j++)
    {
        int currentVectorSizeIteration = std::pow(2, j) * startingVectorSize;
        std::vector<int> vctr = getRandomVector(currentVectorSizeIteration);
        std::cout << "Iteration: " << j << " " << "with vector size " << currentVectorSizeIteration << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        mergeSort->mergeSort(vctr, 0, vctr.size()-1);
        // Calculate resulting time in seconds.
        // Calculate resulting time in seconds.
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);

        std::cout << "Ended with time: " << duration.count() << "." << std::endl;
        std::cout << std::endl;
    }

    return 0;
}