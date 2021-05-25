#include <list>
#include <vector>
#include <queue>
#include <string>

using namespace std;

class Graph
{
private:
	int V;
	vector<list<int>> adjacentList;
	bool contains(list<int> const &list, int const &element);
	void printVisited(list<int> const& visited);
	string printNodeName(int const &node);
public:
	Graph(int const &V);
	void addEdge(int const &u, int const &v);
	void BFS(int const &s);
};