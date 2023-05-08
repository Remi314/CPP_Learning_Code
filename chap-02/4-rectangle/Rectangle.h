#pragma once
#include <iostream>

class Rectangle
{
public:
    static void set_default_size(float size) { _default_size = size; }
    Rectangle() : Rectangle(_default_size){}; // const par defaut
    Rectangle(float length, float width);
    Rectangle(float unique); // Constructeur délégué
    float get_length() const { return _length; }
    float get_width() const { return _width; }
    void scale(float ratio);

private:
    float _length;
    float _width;
    static float _default_size;
};

std::ostream& operator<<(std::ostream& os, const Rectangle& rect);