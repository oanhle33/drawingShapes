//#include "Shape.h"
//#include "Triangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"

Square::Square(int side) : Rectangle(side, side) {
    setWidth(side);
    setHeight(side);
} // Call the Rectangle constructor with both args = side.
void Square::setWidth(int w) {
    Rectangle::setWidth(w);
    height = width;
}  // Call Rectangle::setWidth(w) then set height to width.
void Square::setHeight(int h) {
    setWidth(h);
} // Just call setWidth(h).
std::string Square::getType() const {
    return Rectangle::getType() + "/Square";
}  // Call Rectangle::getType() then append "/Square".
