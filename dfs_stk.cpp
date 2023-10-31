#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack> 
using namespace std;
void	dfs(const	vector<vector<int>>&	graph,	int	start,	unordered_set<int>& visited) {
stack<int> stack; 
stack.push(start); 
while (!stack.empty()) {
int node = stack.top(); stack.pop();
 

if (visited.find(node) == visited.end()) { 
    visited.insert(node);
for (int neighbor : graph[node]) {
if (visited.find(neighbor) == visited.end()) { 
    stack.push(neighbor);
}
}
}
}
}

int main() {
vector<vector<int>> graph = {
{1, 2}, {0, 3, 4}, {0, 5}, {1}, {1, 5}, {2, 4}

};
int startNode = 0; unordered_set<int> visitedNodes; dfs(graph, startNode, visitedNodes); cout << "DFS Visited Nodes: ";
for (int node : visitedNodes) { cout << node << " ";
}
return 0;
}