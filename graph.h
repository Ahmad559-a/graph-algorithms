#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <stack>
#include <vector>
using namespace std;


class Graph { 
public:
	Graph(int V);
	~Graph();
	void add_edge(int u, int w);
	vector<int> topological_order();
	vector<int> BFT(int source);
	bool has_edge(int u, int w);
	void DFT(int source, int color[], stack<int>& s);

private:
	int V;    // No. of vertices 
	list<int> *adj;
};


#endif