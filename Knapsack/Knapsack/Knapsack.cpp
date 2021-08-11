#include <iostream>
#include <vector>

int max(int a, int b) 
{
    if (a > b) return a;
    else return b;
}

int knapsack(int c, std::vector<int>& p, std::vector<int>& v, int n) 
{
    if (n == 0 || c == 0) return 0;

    if (p[n - 1] > c) return knapsack(c, p, v, n - 1);

    else return max(v[n - 1] + knapsack(c - p[n - 1], p, v, n - 1), knapsack(c, p, v, n - 1));
}

int main()
{
    std::vector<int> v = { 60, 100, 120 };
    std::vector<int> p = { 10, 20, 30 };
    int c = 50;
    int n = v.size();
    std::cout << knapsack(c, p, v, n) << std::endl;

    return 0;
}