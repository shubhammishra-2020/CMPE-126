#include <iostream>
#include "Graph.h"
using namespace std;
int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Depth First Traversal: ";

    g.depthFirstTraveral(1);
    return 0;
}
