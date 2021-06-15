#include <iostream>

// Brute force algorithm.
int bfIntegerPower(int b, int n)
{
    int temp = 1;
    if (b == 0 && n == 0) {
        std::cout << "Indetermined value!" << std::endl;
        temp = -1;
    }
    else
    {
        for (int i = n; i > 0; i--) {
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
    else {

        return dcIntegerPower(b, floor((n - 1) / 2)) * dcIntegerPower(b, ceil((n - 1) / 2));
    }
}

int main()
{
    int b = 3;
    int n = 2;

    int result = bfIntegerPower(b, n);
    std::cout << "Brute force: " << result << "." << std::endl;

    result = dcIntegerPower(b, n);
    std::cout << "Divide and conquer: " << result << "." << std::endl;
}