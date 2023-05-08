#pragma once
#include <utility> // pair
#include <vector>
#include <iostream>
using Vertex = std::pair<int,int>; // we can write just "Vertex" instead of std::pair<int,int>

class Polygon
{
private:
    std::vector<Vertex> _vertices; // Vector containing pairs

public:
    void add_vertex(std::pair<int, int> p);
    void add_vertex(int n, int m);
    friend std::ostream& operator<<(std::ostream& os, const Polygon& p);
    const Vertex& get_vertex(int n) const; // last const because it is a getter
};

std::ostream& operator<<(std::ostream& os, const Polygon& p);
