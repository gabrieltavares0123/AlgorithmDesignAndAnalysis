#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeElement(vector<int>& list, int element)
{
    vector<int>::iterator position = find(list.begin(), list.end(), element);
    if (position != list.end()) 
    {
        list.erase(position);
    }
}

vector<int> findRepetitions(vector<int> list0, vector<int> list1) 
{
    vector<int> repetitions;
    
    for (const int elementList0 : list0)
    {
        for (const int elementList1 : list1)
        {
            if (elementList0 == elementList1)
            {
                repetitions.push_back(elementList1);
                removeElement(list1, elementList1);
            }
       }
    }

    return repetitions;
}

void printList(vector<int> list) 
{
    for (const int element : list)
    {
        cout << "element: " << element << endl;
    }

    cout << "--------------------------------------" << endl;
}

int main()
{
    vector<int> list0{ 2, 5, 5, 5 };
    vector<int> list1{ 2, 2, 3, 5, 5, 7 };

    vector<int> result = findRepetitions(list0, list1);

    printList(result);

    return 0;
}