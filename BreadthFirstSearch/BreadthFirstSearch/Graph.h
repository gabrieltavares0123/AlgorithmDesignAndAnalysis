#include <list>

using namespace std;

class Graph
{
private:
	int V;
	vector<list<int>> adjacentList;
	bool contains(const list<int> &list, int const &element);
public:
	Graph(int const &V);
	void addEdge(int const &u, int const &v);
	void BFS(int const &s);
};