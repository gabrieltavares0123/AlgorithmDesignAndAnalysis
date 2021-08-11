#include <iostream>
#include <vector>

std::vector<int> greedyMinimumStop(std::vector<int>& hostels, int D) 
{
    std::vector<int> solution = {};
    solution.push_back(hostels[0]);

    int currentDistance = hostels[0];
    int lastHostel = 1;
    for (int i = 1; i < hostels.size(); i++)
    {
        currentDistance += hostels[i] - hostels[i - 1];
        if (currentDistance <= D)
        {
            lastHostel = i;
        }
        else 
        {
            solution.push_back(hostels[lastHostel]);
            lastHostel = i;
            currentDistance = hostels[i];
        }
    }

    return solution;
}

int main()
{
    int D = 12;
    std::vector<int> hostels = { 0, 5, 8, 11, 15, 17 };

    std::vector<int> solution = greedyMinimumStop(hostels, D);

    for (int i = 0; i < solution.size(); i++)
    {
        std::cout << "Hostel: " + i << " - distance: " << solution[i] << std::endl;
    }

    return 0;
}


