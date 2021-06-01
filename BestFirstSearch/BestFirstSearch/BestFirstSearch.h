#include <vector>

typedef std::pair<int, int> costEdgeToNode;

class BestFirstSearch
{
private:
	std::vector<std::vector<costEdgeToNode>> graph;
	int V;
public:
	BestFirstSearch(int V);
	void addEdge(int x, int y, int cost);
	void bestFirstSearch(int const startingNode, int const target);
};