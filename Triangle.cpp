#include <cmath>
#include "Shape.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int w, int h) : Shape(w, h) {
    setWidth(w);
    setHeight(h);
}  // Call Shape constructor and ensure width >=3
void Triangle::setWidth(int w) {
    if(w < 3) width = 3;
    else width = w;
}  // Ensure that width >= 3
void Triangle::draw() const {
    for (int row = 1; row <= height; row++) {
        int numStars = 0;
        numStars = (static_cast<double>(width)/height)*row;
        int spaces = (width - numStars)/2; //calculate the space
        for (int k = 0; k < spaces; k++)
            cout << " ";
        for (int j=0; j < numStars; j++)
            cout << "*";
        cout << endl;
    }
}  // See the sample output as a guide
double Triangle::getArea() const {
    return Shape::getArea() / 2;
}  // Call Shape::getArea() then divide by 2.
double Triangle::getPerimeter() const {
    return width + sqrt(4*height*height + width*width);
} // Use the Pythagorean theorem.
std::string Triangle::getType() const {
        return Shape::getType() + "/Triangle";
} // Call Shape::getType() then append "/Triangle"
