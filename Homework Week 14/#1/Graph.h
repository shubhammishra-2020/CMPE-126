//
// Created by Shubham Mishra on 5/8/2022.
//

#ifndef HW14_1_GRAPH_H
#define HW14_1_GRAPH_H
#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int>> adj;

    void addEdge(int v, int w);
    void depthFirstTraveral(int v);

};

void Graph ::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph ::depthFirstTraveral(int v) {
    visited[v] = true;
    cout << v << " ";
    list<int> :: iterator it;
    for(it = adj[v].begin(); it != adj[v].end();++it){
        if(!visited[*it]){
            depthFirstTraveral(*it);
        }
    }
}


#endif //HW14_1_GRAPH_H
