#include "graph.h"
#include<iostream>
#include<map>
using namespace std;


int main() {

    Graph g(10);
    char c;

    // for(int i = 0; i < 10; i++){
    //     c = 65+i;
    //     cout << c << endl;

    // }

    g.add_edge(0, 1);
    g.add_edge(0, 4);
    g.add_edge(1, 5);
    g.add_edge(1, 6);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(2, 6);
    g.add_edge(5, 8);
    g.add_edge(4, 5);
    g.add_edge(8, 9);

    // vector<int> result = g.BFT(0);

    //BFT EXAMPLE

    // cout << "Shortest path distances from A (Node 0):" << endl;

    // for(int i = 0; i < 10; i++){
    //     c = 65 + i;
    //     cout << c << " : " << result[i] << endl;  
    // }

    // DFT IMPLEMENTATION
    // stack<int> s;
    // int colors[10];

    // for(int i = 0; i < 10; i++) colors[i] = 1;

    // g.DFT(0, colors, s);

    // c = 'A';
    // while(!s.empty()){
    //     int vertex = s.top();
    //     cout << (char)(c + vertex) << " ===> ";
    //     s.pop(); 
    // }

    Graph wearing(5);// 0: undies || 1: pants || 2: socks || 3: shoes || 4: belt
    map<int, string> names;
    names.insert(pair(0, "undies"));
    names.insert(pair(1, "pants"));
    names.insert(pair(2, "socks"));
    names.insert(pair(3, "shoes"));
    names.insert(pair(4, "belt"));

    wearing.add_edge(0, 1);
    wearing.add_edge(1, 3);
    wearing.add_edge(1, 4);
    wearing.add_edge(2, 3);

    for(int node : wearing.topological_order()){
        cout << names[node] << " ";
    }

    return 0;
}