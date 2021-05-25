#include "Graph.h"
#include <iostream>
#include "Constants.cpp"

bool Graph::contains(const list<int>& list, int const &element)
{
	return std::find(list.begin(), list.end(), element) != list.end();
}

Graph::Graph(int const &V)
{
	this->V = V;
	this->adjacentList.resize(V);
}

void Graph::addEdge(int const &u, int const &v)
{
	this->adjacentList[u].push_back(v);
}

string Graph::printNodeName(int const &node)
{
	switch (node)
	{
	case Oradea: return "Oradea";
	case Zerind: return "Zerind";
	case Arad: return "Arad";
	case Timisoara: return "Timisoara";
	case Lugoj: return "Lugoj";
	case Mehadia: return "Mehadia";
	case Drobeta: return "Drobeta";
	case Craiova: return "Craiova";
	case RimnicuVilcea: return "Rimnicu Vilcea";
	case Sibiu: return "Sibiu";
	case Fagaras: return "Fagaras";
	case Pitesti: return "Pitesti";
	case Giurgiu: return "Giurgiu";
	case Bucharest: return "Bucharest";
	case Eforie: return "Eforie";
	case Hirsova: return "Hirsova";
	case Urziceni: return "Urziceni";
	case Vaslui: return "Vaslui";
	case Iasi: return "Iasi";
	case Neamt: return "Neamt";
	default:
		return "ERROR: unknow node.";
	}

	return "";
}

void Graph::BFS(int const &s)
{
	queue<int> Q;
	Q.push(s);
	list<int> visited;

	while (!Q.empty()) 
	{
		int u = Q.front();
		Q.pop();
		visited.push_back(u);

		cout << "Visiting " << this->printNodeName(u) << "..." << endl;

		list<int>::iterator it;
		for (it = this->adjacentList[u].begin(); it != this->adjacentList[u].end(); ++it)
		{
			if (!this->contains(visited, *it))
			{
				Q.push(*it);
				cout << "Adding " << this->printNodeName(*it) << " to queue..." << endl;
			}
		}
		cout << "-----------------------" << endl;
	}

	if (Q.empty()) 
	{
		cout << "ERROR: Queue is empty." << endl;
	}
}

void Graph::printVisited(list<int> const &visited)
{
	cout << "Printing current visited list..." << endl;
	for (auto const &item : visited)
	{
		cout << item << ", ";
	}

	cout << endl;
}