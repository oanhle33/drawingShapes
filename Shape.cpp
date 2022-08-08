#include "Shape.h"
#include <iostream>
using namespace std;
//we can leave int Shape::shapeCount because C++ auto store 0 in all uninitialized static member variable
int Shape::shapeCount = 0;  // Initialize shapeCount to 0 in Shape.cpp.
    // Set ID to ++shapeCount in the the constructor initializater list.

Shape::Shape(int w, int h):ID(++shapeCount) {
    setWidth(w);
    setHeight(h);

}   // Set width and height via setters.
void Shape::printInformation() const {
    cout << "ID=" << ID << "\t width=" << getWidth() << "\t height=" << getHeight() << "\t area="
          << getArea() << "\t perim=" << getPerimeter() << "\t type=" << getType() << endl;
}  // See the sample output as a guide.
int Shape::getWidth() const {
    return width;
}  // Just return width.
int Shape::getHeight() const {
    return height;
} // Just return height.
//void Shape::draw() const = 0;   // This is a pure virtual method.
void Shape::setWidth(int w) {
    if(w < 2) width = 2;
    else width = w;
}   // The width must be at least 2
void Shape::setHeight(int h) {
    if(h < 2) height = 2;
    else height = h;
} // The height must be at least 2.
double Shape::getArea() const {
    return width*height;
}  // Approximated by bounding rectangle = width*height
//double Shape::getPerimeter() const = 0;  // Another pure virtual method.
std::string Shape::getType() const {
    return "Shape";
}  // Just return "Shape".
