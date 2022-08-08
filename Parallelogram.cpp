#include "Shape.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include <cmath>
#include <iostream>
using namespace std;

Parallelogram::Parallelogram(int w, int h, int topShift) : Shape(w, h) {
    setTopShift(topShift);
} // call Shape Constructor & call setTopShift()
void Parallelogram::draw() const {
    for (int row = 1; row <= height; row++) {
        int spaces = (height - row) * topShift / height;
        for (int k = 0; k < spaces; k++)
            cout << " ";
        for (int j = 0; j < width; j++)
            cout << "*";
        cout << endl;
    }
}  // See the sample output as a guide.
double Parallelogram::getPerimeter() const {
    double side = sqrt(height*height + topShift*topShift);
    return 2*(width + side);
} // Use the Pythagorean theorem.
void Parallelogram::setTopShift(int t) {
    if(t < 0) topShift = 0;
    else topShift = t;
}      // topShift must be nonnegative
std::string Parallelogram::getType() const {
    return Shape::getType() + "/Parallelogram";
}  // call Shape::getType() and append "/Parallelogram".
void Parallelogram::printInformation() const {
    cout << "ID=" << ID << "\t width=" << getWidth() << "\t height=" << getHeight() << "\t area="
          << getArea() << "\t perim=" << getPerimeter() << "\t type=" << getType() << "\t topShift: " << topShift << endl;
}

