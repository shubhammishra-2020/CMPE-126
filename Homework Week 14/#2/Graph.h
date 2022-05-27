//
// Created by Shubham Mishra on 5/8/2022.
//

#ifndef HW14_2_GRAPH_H
#define HW14_2_GRAPH_H
#include <bits/stdc++.h>

class Graph {
    int V;
    std::vector<std::list<int>> adj;

public:
    Graph(int V);
    void addEdge(int v,int w);
    void breadthFirst(int s);


};

Graph ::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph ::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph ::breadthFirst(int s) {
    std::vector <bool> visited;
    visited.resize(V,false);

    std:: list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty()){
        s = queue.front();
        std:: cout << s << " ";
        queue.pop_front();


        for(auto adjacent: adj[s]){
            if(!visited[adjacent]){
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}


#endif //HW14_2_GRAPH_H
