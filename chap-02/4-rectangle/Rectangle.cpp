#include "Rectangle.h"
#include <iostream>

// Variable static a initialiser ici (sans static)
float Rectangle::_default_size = 0.f;

// Constructeur par defaut
Rectangle::Rectangle(float length, float width)
    : _length{length}, _width{width} {};

// Constructeur délégué
Rectangle::Rectangle(float unique) 
    : Rectangle(unique, unique) {};

// Surcharge de l'operateur <<
std::ostream& operator<<(std::ostream& os, const Rectangle& rect)
{
    return os << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }";
}

// Fonction-membre scale
void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
};