#include <iostream>
#include "Graph.h"
#include "Constants.cpp"

int main()
{
    Graph *graph = new Graph(20);

    // Edges.
    // Oradea---Zerind
    graph->addEdge(Oradea, Zerind);

    // Zerind---Arad
    graph->addEdge(Zerind, Arad);

    // Arad---Timisoara
    graph->addEdge(Arad, Timisoara);

    // Timisoara---Lugoj
    graph->addEdge(Lugoj, Timisoara);

    // Lugoj---Mehadia
    graph->addEdge(Lugoj, Mehadia);

    // Mehadia---Drobeta
    graph->addEdge(Drobeta, Mehadia);

    // Drobeta---Craiova
    graph->addEdge(Drobeta, Craiova);

    // Craiova---Rimnico Vilcea
    graph->addEdge(RimnicuVilcea, Craiova);

    // Rimnico Vilcea--Sibiu
    graph->addEdge(RimnicuVilcea, Sibiu);

    // Sibiu---Arad
    graph->addEdge(Arad, Sibiu);

    // Sibiu---Oradea
    graph->addEdge(Oradea, Sibiu);

    // Craiova---pitesti
    graph->addEdge(Craiova, Pitesti);

    // Rimnicu Vilcea---Pitesti
    graph->addEdge(RimnicuVilcea, Pitesti);

    // Pitesti---Bucharest
    graph->addEdge(Bucharest, Pitesti);

    // Bucharest---Fagaras
    graph->addEdge(Bucharest, Fagaras);

    // Fagaras---Sibiu
    graph->addEdge(Fagaras, Sibiu);

    // Bucharest---Giurgiu
    graph->addEdge(Bucharest, Giurgiu);

    // Bucharest---Urziceni
    graph->addEdge(Bucharest, Urziceni);

    // Eforie---Hirzova
    graph->addEdge(Eforie, Hirsova);

    // Hirzova---Urziceni
    graph->addEdge(Hirsova, Urziceni);

    // Urziceni---Vaslui
    graph->addEdge(Vaslui, Urziceni);

    // Vaslui---Iasi
    graph->addEdge(Vaslui, Iasi);

    // Iasi---Neamt
    graph->addEdge(Iasi, Neamt);

    
    cout << "---___---Nodes list---___---" << endl;
    cout << "0 - Oradea" << endl;
    cout << "1 - Zerind" << endl;
    cout << "2 - Arad" << endl;
    cout << "3 - Timisoara" << endl;
    cout << "4 - Lugoj" << endl;
    cout << "5 - Mehadia" << endl;
    cout << "6 - Drobeta" << endl;
    cout << "7 - Craiova" << endl;
    cout << "8 - Rimnicu Vilcea" << endl;
    cout << "9 - Sibiu" << endl;
    cout << "10 - Fagaras" << endl;
    cout << "11 - Pitesti" << endl;
    cout << "12 - Giurgiu" << endl;
    cout << "13 - Bucharest" << endl;
    cout << "14 - Eforie" << endl;
    cout << "15 - Hirsova" << endl;
    cout << "16 - Urziceni" << endl;
    cout << "17 - Vaslui" << endl;
    cout << "18 - Iasi" << endl;
    cout << "19 - Neamt" << endl;
    cout << "---___---Nodes list---___---" << endl;

    cout << "Enter the starting node: " << endl;
    int node;
    cin >> node;
    graph->DFS(node);
}