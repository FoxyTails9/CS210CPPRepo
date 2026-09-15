#include "Point.h"

#include <iostream>
#include <ostream>

Point::Point() :Point(0.0, 0.0){
}

Point::Point(double x, double y) :x_(x), y_(y){
    //write if statements for practice?
}

Point::Point(double xy) :Point(xy, xy){
    // TODO: delegate to the two-argument constructor with both
    // coordinates set to xy. Rewrite the line above to read:
    //   Point::Point(double xy) : Point(xy, xy) {
}
