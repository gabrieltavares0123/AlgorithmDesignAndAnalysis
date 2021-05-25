#include "Graph.h"
#include <queue>
#include <iostream>

bool Graph::contains(const list<int>& list, int const &element)
{
	return find(list.begin(), list.end(), element) != list.end();
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

		cout << u << " ";

		list<int>::iterator it;
		for (it = this->adjacentList[u].begin(); it != this->adjacentList[u].end(); ++it)
		{
			if (!Graph::contains(visited, *it))
			{
				visited.push_back(*it);
				Q.push(*it);
			}
		}
	}
}