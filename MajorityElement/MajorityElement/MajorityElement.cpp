#include <iostream>
#include <vector>

void removeElement(std::vector<int>& list, int element)
{
    std::vector<int>::iterator position = find(list.begin(), list.end(), element);
    if (position != list.end())
    {
        list.erase(position);
    }
}

int findMajorityCandidate(std::vector<int>& vctr, int start, int end)
{
    if (start == end)
    {
        return vctr[start];
    }
    else
    {        
        int left = findMajorityCandidate(vctr, start, (start + end - 1) / 2);
        int right = findMajorityCandidate(vctr, ((start + end - 1) / 2) + 1, vctr.size() - 1);

        if (left == NULL && right == NULL)
            return NULL;
        
        else if (left == NULL && right != NULL)
            return right;
        
        else if (left != NULL && right == NULL)
            return left;
        
        else if (left != right)
            return NULL;
        
        else return left;
    }
}

bool isMajorityElement(std::vector<int>& vctr, int majorityCandidate)
{
    int count = 0;
    int half = std::ceil(vctr.size() / 2);
    if (vctr.size() % 2 == 0) half += 1;

    for (int i = 0; i < vctr.size(); i++)
    {
        if (vctr[i] == majorityCandidate)
        {
            count++;
        }
    }

    return count > half;
}

void example1()
{
    std::vector<int> vctr = { 2, 3, 4, 10, 10, 10, 10 };

    int mid = std::floor(vctr.size() / 2);

    int majorityCandidate = findMajorityCandidate(vctr, 0, vctr.size() - 1);

    std::cout << "Candidate: " << majorityCandidate << std::endl;

    bool isMajority = isMajorityElement(vctr, majorityCandidate);

    if (isMajority)
    {
        std::cout << majorityCandidate << ": is majority." << std::endl;
    }
    else
    {
        std::cout << majorityCandidate << ": is not majority." << std::endl;
    }
}

void example2()
{
    std::vector<int> vctr = { 1, 2, 3 };

    int mid = std::floor(vctr.size() / 2);

    int majorityCandidate = findMajorityCandidate(vctr, 0, vctr.size() - 1);

    std::cout << "Candidate: " << majorityCandidate << std::endl;

    bool isMajority = isMajorityElement(vctr, majorityCandidate);

    if (isMajority)
    {
        std::cout << majorityCandidate << ": is majority." << std::endl;
    }
    else
    {
        std::cout << majorityCandidate << ": is not majority." << std::endl;
    }
}

void example3()
{
    std::vector<int> vctr = { 2, 3, 4, 5, 5, 5, 5, 7 };

    int mid = std::floor(vctr.size() / 2);

    int majorityCandidate = findMajorityCandidate(vctr, 0, vctr.size() - 1);

    std::cout << "Candidate: " << majorityCandidate << std::endl;

    bool isMajority = isMajorityElement(vctr, majorityCandidate);

    if (isMajority)
    {
        std::cout << majorityCandidate << ": is majority." << std::endl;
    }
    else
    {
        std::cout << majorityCandidate << ": is not majority." << std::endl;
    }
}

int main()
{
    example1();
    example2();
    example3();

    return 0;
}
