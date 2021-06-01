#include "BestFirstSearch.h"
#include <iostream>
#include <queue>

BestFirstSearch::BestFirstSearch(int V)
{
	this->V = V;
	this->graph.resize(V);
}

void BestFirstSearch::addEdge(int x, int y, int cost)
{
	this->graph[x].push_back(costEdgeToNode(cost, y));
	this->graph[y].push_back(costEdgeToNode(cost, x));
}

void BestFirstSearch::bestFirstSearch(int const source, int const target)
{
	std::vector<bool> visited(V, false);
	std::priority_queue<costEdgeToNode, std::vector<costEdgeToNode>, std::greater<costEdgeToNode>> priority;

	priority.push(costEdgeToNode(0, source));
	visited[0] = true;

	while (!priority.empty())
	{
		int lowestCostNode = priority.top().second;
		
		std::cout << lowestCostNode << " ";
		priority.pop();

		if (lowestCostNode == target)
		{
			break;
		}
		else
		{
			for (int i = 0; i < this->graph[lowestCostNode].size(); i++)
			{
				if (!visited[this->graph[lowestCostNode][i].second])
				{
					visited[this->graph[lowestCostNode][i].second] = true;
					priority.push(this->graph[lowestCostNode][i]);
				}
			}
		}
	}

}