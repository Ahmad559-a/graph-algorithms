#include<iostream>
#include "graph.h"
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
    g.add_edge(8, 9);

    vector<int> result = g.BFT(0);

    cout << "Shortest path distances from A (Node 0):" << endl;

    for(int i = 0; i < 10; i++){
        c = 65 + i;
        cout << c << " : " << result[i] << endl;  
    }

    return 0;
}