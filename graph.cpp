#include "graph.h"
#include<queue>

using namespace std;


Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

Graph::~Graph() {
    delete [] adj;
}

void Graph::add_edge(int u, int w) {
    if(has_edge(u,w))
        return;
    
    adj[u].push_back(w);
	adj[w].push_back(u);
}

bool Graph::has_edge(int u, int w) {
	for(int v : adj[u]){
		if(v == w) return true;
	}

	return false;
}

/*

This is the graph that I will use in the examples

(A)----(B)----(C)---(D)
|        | \   |
|        |  \  |
|        |   \ |
(E)-----(F)   (G)
          \
           \
            \
             (I)-----(J)
        
        (H)


*/

vector<int> Graph::BFT(int source) {
    queue<int> q;
    vector<bool> marked(V, false);
    vector<int> distance(V, -1); // ===> this will be the distance between the source and the other vertixes (source, (vertix, dis))

    q.push(source);
    distance[source] = 0;
    marked[source] = true;

    while (!q.empty())
    {
        int current_vertex = q.front();
        q.pop();

        for(int neighbor : adj[current_vertex]){
            if(!marked[neighbor]){
                q.push(neighbor);
                distance[neighbor] = distance[current_vertex]+1;
                marked[neighbor] = true;
            }
        }


    }
    
    vector<int> result = {distance};

    return result;

}

void Graph::DFT(int source, int color[], stack<int>& s) {
    
}