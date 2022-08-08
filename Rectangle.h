#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Parallelogram.h"
class Rectangle : public Parallelogram
{
public:
    Rectangle(int w = 2, int h = 2);

    std::string getType() const;
};

#endif // RECTANGLE_H_INCLUDED
