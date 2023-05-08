#include "Polygon.h"
 
void Polygon::add_vertex(std::pair<int, int> p)
    {
        _vertices.emplace_back(p);
    };
void Polygon::add_vertex(int n, int m)
{
    _vertices.emplace_back(n,m);
};

std::ostream& operator<<(std::ostream& os, const Polygon& p)
{
    for (auto i: p._vertices)
    {
        os << "(" << i.first << "," << i.second << ")" << " " ;       
    };  
    return os;
};

const Vertex& Polygon::get_vertex(int n) const{
        return _vertices[n];
    };

