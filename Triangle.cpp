//
// Created by Raniery Costa Mendes on 11/7/19.
//
#include "Triangle.h"

int Triangle ::area() {

        Polygon::area();
        int getArea = (width * height) / 2;
        return getArea;

}