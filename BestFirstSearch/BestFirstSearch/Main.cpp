#include <iostream>
#include "BestFirstSearch.h"

int main()
{
    int V = 14;
    BestFirstSearch* search = new BestFirstSearch(V);

    search->addEdge(0, 1, 3);
    search->addEdge(0, 2, 6);
    search->addEdge(0, 3, 5);
    search->addEdge(1, 4, 9);
    search->addEdge(1, 5, 8);
    search->addEdge(2, 6, 12);
    search->addEdge(2, 7, 14);
    search->addEdge(3, 8, 7);
    search->addEdge(8, 9, 5);
    search->addEdge(8, 10, 6);
    search->addEdge(9, 11, 1);
    search->addEdge(9, 12, 10);
    search->addEdge(9, 13, 2);

    int source = 0;
    int target = 9;

    search->bestFirstSearch(source, target);

    return 0;
}
