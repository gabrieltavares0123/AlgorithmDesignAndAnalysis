#include "Graph.h"
#include <iostream>
#include "Constants.cpp"

bool Graph::notContains(const list<int>& list, int const &element)
{
	if (std::find(list.begin(), list.end(), element) != list.end())
	{
		return false;
	}

	return true;
}

Graph::Graph(int const &V)
{
	this->V = V;
	this->adjacentList.resize(V);
}

void Graph::addEdge(int const &u, int const &v)
{
	this->adjacentList[u].push_back(v);
	this->adjacentList[v].push_back(u);
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
	list<int> border;
	border.push_back(s);
	list<int> explored;

	if (border.empty())
	{
		cout << "ERROR: Queue is empty." << endl;
	}
	else
	{
		while (!border.empty())
		{
			int u = border.front();
			border.pop_front();
			explored.push_back(u);

			cout << "Exploring " << this->printNodeName(u) << "..." << endl;
			list<int>::iterator it;
			for (it = this->adjacentList[u].begin(); it != this->adjacentList[u].end(); ++it)
			{
				int v = *it;
				cout << "Visiting " << this->printNodeName(v) << "..." << endl;
				if (this->notContains(explored, v) && this->notContains(border, v))
				{
					border.push_back(v);
					cout << "Adding " << this->printNodeName(v) << " to queue..." << endl;
				}
			}
			cout << "-----------------------" << endl;
		}
	}
}