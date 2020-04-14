#ifndef DIGRAPH_H
#define DIGRAPH_H

#include <iostream>
#include <istream>
#include <string>

class Digraph {
    public:
        Digraph(int V);
        Digraph(std::istream &in);

        std::vector<int>::iterator Union::adj(int v);
        Digraph reverse();
        std::string toString();

        int V(); // number of vertices
        int E(); // number of edges
        void addEdge(int v, int w); // number of edges

    private:
        vector<vector<int>> adjacents;
        
}

#endif