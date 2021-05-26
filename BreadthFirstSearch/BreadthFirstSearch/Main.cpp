#include <iostream>
#include "Graph.h"
#include "Constants.cpp"

int main()
{
    Graph *graph = new Graph(20);

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

    // Timisoara---Lugoj
    graph->addEdge(Lugoj, Timisoara);
    graph->addEdge(Timisoara, Lugoj);

    // Lugoj---Mehadia
    graph->addEdge(Lugoj, Mehadia);
    graph->addEdge(Mehadia, Lugoj);

    // Mehadia---Drobeta
    graph->addEdge(Drobeta, Mehadia);
    graph->addEdge(Mehadia, Drobeta);

    // Drobeta---Craiova
    graph->addEdge(Drobeta, Craiova);
    graph->addEdge(Craiova, Drobeta);

    // Craiova---Rimnico Vilcea
    graph->addEdge(RimnicuVilcea, Craiova);
    graph->addEdge(Craiova, RimnicuVilcea);

    // Rimnico Vilcea--Sibiu
    graph->addEdge(RimnicuVilcea, Sibiu);
    graph->addEdge(Sibiu, RimnicuVilcea);

    // Sibiu---Arad
    graph->addEdge(Arad, Sibiu);
    graph->addEdge(Sibiu, Arad);

    // Sibiu---Oradea
    graph->addEdge(Oradea, Sibiu);
    graph->addEdge(Sibiu, Oradea);

    // Craiova---pitesti
    graph->addEdge(Craiova, Pitesti);
    graph->addEdge(Pitesti, Craiova);

    // Rimnicu Vilcea---Pitesti
    graph->addEdge(RimnicuVilcea, Pitesti);
    graph->addEdge(Pitesti, RimnicuVilcea);

    // Pitesti---Bucharest
    graph->addEdge(Bucharest, Pitesti);
    graph->addEdge(Pitesti, Bucharest);

    // Bucharest---Fagaras
    graph->addEdge(Bucharest, Fagaras);
    graph->addEdge(Fagaras, Bucharest);

    // Fagaras---Sibiu
    graph->addEdge(Sibiu, Fagaras);
    graph->addEdge(Fagaras, Sibiu);

    // Bucharest---Giurgiu
    graph->addEdge(Bucharest, Giurgiu);
    graph->addEdge(Giurgiu, Bucharest);

    // Bucharest---Urziceni
    graph->addEdge(Bucharest, Urziceni);
    graph->addEdge(Urziceni, Bucharest);

    // Eforie---Hirzova
    graph->addEdge(Eforie, Hirsova);
    graph->addEdge(Hirsova, Eforie);

    // Hirzova---Urziceni
    graph->addEdge(Hirsova, Urziceni);
    graph->addEdge(Urziceni, Hirsova);

    // Urziceni---Vaslui
    graph->addEdge(Vaslui, Urziceni);
    graph->addEdge(Urziceni, Vaslui);

    // Vaslui---Iasi
    graph->addEdge(Vaslui, Iasi);
    graph->addEdge(Iasi, Vaslui);

    // Iasi---Neamt
    graph->addEdge(Iasi, Neamt);
    graph->addEdge(Neamt, Iasi);

    
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
    graph->BFS(node);
}