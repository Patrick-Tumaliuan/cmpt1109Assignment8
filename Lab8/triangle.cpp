
#include "Rectangle.h"
double height;
double width;
string color;

Rectangle::Rectangle() {
    width = 2;
    height = 1;
    color = "White";
}

Rectangle::Rectangle(double h,double w, string c ) {
    width = w;
    height = h;
    color = c;
}

double Rectangle::getHeight() {
    return height;
}
double Rectangle::getWidth(){
    return width;
}
string Rectangle::getColor() {
    return color;
}
void Rectangle::setHeight(double h) {
    if (h > 0)
    height = h;
};
void Rectangle::setWidth(double w) {
    if (w > 0)
        width = w;
}
void Rectangle::setColor(string c) {
    color = c;
}
double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2* (width + height);
}
void Rectangle::toString() {
    cout << "The height is: " << height << " The width is: " << width << " The color is: " << color;
}
