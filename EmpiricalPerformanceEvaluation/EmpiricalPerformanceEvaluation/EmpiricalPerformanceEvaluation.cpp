#include <iostream>
#include <chrono>
#include <vector>
#include "BubbleSort.h"
#include "MergeSort.h"

int recursiveSum(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return recursiveSum(num - 1) + recursiveSum(num - 1);
    }
}

void performRecusriveSumMeasures(int startingSize, int iteractions)
{
    int inputSize = startingSize;
    long long prevTime = 0;

    // Recursive sim measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Recusrsive sum measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int i = 0; i < iteractions; i++)
    {
        std::cout << "Iteration: " << i + 1 << " " << "with vector size " << inputSize << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes sum.
        recursiveSum(inputSize);
        // Calculate resulting time in milliseconds.
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);

        std::cout << "Ended with time: " << duration.count() << "." << std::endl;
        std::cout << std::endl;

        inputSize++;
    }
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

void performBubbleSortMeasures(int startingSize, int iterations)
{
    BubbleSort* bubbleSort = new BubbleSort();
    int inputSize = startingSize;
    long long prevTime = 0;

    // Bubble sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Bubble sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int i = 0; i < iterations; i++)
    {
        std::vector<int> vctr = getRandomVector(inputSize);
        std::cout << "Iteration: " << i + 1 << " " << "with vector size " << inputSize << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        bubbleSort->bubbleSort(vctr);
        // Calculate resulting time in milliseconds.
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

void performMergeSortMeasures(int startingSize, int iterations)
{
    MergeSort* mergeSort = new MergeSort();
    int inputSize = startingSize;
    long long prevTime = 0;

    // Merge sort measures.
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "--------Starting Merge sort measures-----------" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    for (int j = 0; j < iterations; j++)
    {
        std::vector<int> vctr = getRandomVector(inputSize);
        std::cout << "Iteration: " << j + 1 << " " << "with vector size " << inputSize << "..." << std::endl;

        // Start clock.
        auto initialTime = std::chrono::high_resolution_clock::now();
        // Processes search.
        mergeSort->mergeSort(vctr, 0, vctr.size() - 1);
        // Calculate resulting time in milliseconds.
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
    int startingSize = 1;
    int iterations = 32;

    //performBubbleSortMeasures(startingSize, iteractions);
    //performMergeSortMeasures(startingSize, iteractions);

    // WARNING: Nerver perform that measure with large numbers or you will have to wait until death.
    performRecusriveSumMeasures(startingSize, iterations);

    return 0;
}