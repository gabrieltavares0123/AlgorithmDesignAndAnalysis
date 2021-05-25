#include <iostream>
#include "Graph.h"

int main()
{
    Graph *graph = new Graph(20);

    // Nodes.
    int const Oradea = 0;
    int const Zerind = 1;
    int const Arad = 2;
    int const Timisoara = 3;
    int const Lugoj = 4;
    int const Mehadia = 5;
    int const Drobeta = 6;
    int const Craiova = 7;
    int const RimnicuVilcea = 8;
    int const Sibiu = 9;
    int const Fagaras = 10;
    int const Pitesti = 11;
    int const Giurgiu = 12;
    int const Bucharest = 13;
    int const Eforie = 14;
    int const Hirsova = 15;
    int const Urziceni = 16;
    int const Vaslui = 17;
    int const Iasi = 18;
    int const Neamt = 19;

    // Edges.
    // Oradea---Zerind
    graph->addEdge(Oradea, Zerind);
    graph->addEdge(Zerind, Oradea);

    // Zerind---Arad
    graph->addEdge(Zerind, Arad);
    graph->addEdge(Arad, Zerind);

    // Arad---Timisoara
    graph->addEdge(Arad, Timisoara);
    graph->addEdge(Timisoara, Arad);

    cout << "Breadth First Search Traversal: " << endl;
    int node;
    cin >> node;
    graph->BFS(node);
}