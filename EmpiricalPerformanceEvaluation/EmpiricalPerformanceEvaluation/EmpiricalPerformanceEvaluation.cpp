#include <iostream>
#include <chrono>
#include <vector>
#include "BubbleSort.h"
#include "MergeSort.h"

std::vector<int> getRandomVector(int vectorSize)
{
    std::vector<int> vctr;

    for (int i = 0; i < vectorSize; i++)
    {
        vctr.push_back(rand() % 1000 + 1);
    }

    return vctr;
}

void performBubbleSortMeasures(int startingSize, int iteractions)
{
    BubbleSort* bubbleSort = new BubbleSort();
    int inputSize = startingSize;
    long long prevTime = 0;

    // Bubble sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Bubble sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int i = 0; i < iteractions; i++)
    {
        std::vector<int> vctr = getRandomVector(inputSize);
        std::cout << "Iteration: " << i + 1 << " " << "with vector size " << inputSize << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        bubbleSort->bubbleSort(vctr);
        // Calculate resulting time in seconds.
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);

        std::cout << "Ended with time: " << duration.count() << "." << std::endl;
        std::cout << std::endl;

        // Prepare for the next iteration.
        if (prevTime > 0)
        {
            std::cout << "d = " << duration.count() / prevTime << std:: endl;
        }
        prevTime = duration.count();
        inputSize = 2 * inputSize;
    }
}

void performMergeSortMeasures(int startingSize, int iteractions)
{
    MergeSort* mergeSort = new MergeSort();
    int inputSize = startingSize;
    long long prevTime = 0;

    // Merge sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Merge sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int j = 0; j < iteractions; j++)
    {
        std::vector<int> vctr = getRandomVector(inputSize);
        std::cout << "Iteration: " << j + 1 << " " << "with vector size " << inputSize << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        mergeSort->mergeSort(vctr, 0, vctr.size() - 1);
        // Calculate resulting time in seconds.
        // Calculate resulting time in seconds.
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);

        std::cout << "Ended with time: " << duration.count() << "." << std::endl;
        std::cout << std::endl;

        // Prepare for the next iteration.
        if (prevTime > 0)
        {
            std::cout << "d = " << duration.count() / prevTime << std::endl;
        }
        prevTime = duration.count();
        inputSize = 2 * inputSize;
    }
}

int main()
{
    int startingSize = 25;
    int iteractions = 15;

    performBubbleSortMeasures(startingSize, iteractions);
    performMergeSortMeasures(startingSize, iteractions);

    return 0;
}