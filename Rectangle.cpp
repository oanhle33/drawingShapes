//#include "Shape.h"
//#include "Triangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"

Rectangle::Rectangle(int w, int h) : Parallelogram(w, h) {
    setWidth(w);
    setHeight(h);
}

std::string Rectangle::getType() const {
    return Parallelogram::getType() + "/Rectangle";
}
