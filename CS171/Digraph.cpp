#include "Digraph.hpp"

// Digraph Constructor
Digraph::Digraph(int V)
{
    adjacents.push_back({V, 0});
}

Digraph::Digraph(istream &in)
{
    int value, ch;
    ch = in.peek();

    while(std::isdigit(ch))
    {
        std::cout << ch << std::endl;
        ch = in.peek();
    }
}