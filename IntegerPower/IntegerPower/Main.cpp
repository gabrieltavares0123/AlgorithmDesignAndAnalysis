#include <iostream>

// Brute force algorithm.
int bfIntegerPower(int b, int n)
{
    int temp = 1;
    if (b == 0 && n == 0) 
    {
        std::cout << "Indetermined value!" << std::endl;
        temp = -1;
    }
    else
    {
        for (int i = n; i > 0; i--) 
        {
            temp = temp * b;
        }
    }

    return temp;
}

// Divide and conquer algorithm.
int dcIntegerPower(int b, int n)
{
    if (n == 0)
    {
        return b;
    }
    else 
    {
        return dcIntegerPower(b, floor((n - 1) / 2)) * dcIntegerPower(b, ceil((n - 1) / 2));
    }
}

// Optimized divide and conquer algorithm.
int odcIntegerPower(int b, int n)
{
    if (n == 0)
    {
        return b;
    }
    else
    {
        if (n % 2 == 0)
        {
            return odcIntegerPower(b, floor((n - 1) / 2)) * odcIntegerPower(b, floor((n - 1) / 2));
        }
        else
        {
            return odcIntegerPower(b, floor((n - 1) / 2)) * odcIntegerPower(b, floor((n - 1) / 2)) * b;
        }
    }
}

int main()
{
    int b = 5;
    int n = 2;

    int result = bfIntegerPower(b, n);
    std::cout << "Brute force: " << result << "." << std::endl;

    result = dcIntegerPower(b, n);
    std::cout << "Divide and conquer: " << result << "." << std::endl;

    result = odcIntegerPower(b, n);
    std::cout << "Optimized divide and conquer: " << result << "." << std::endl;
}