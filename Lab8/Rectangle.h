#pragma once
#include <iostream>
using namespace std;

class Rectangle {
private:
    string color;
    double width;
    double height;

public:
        Rectangle();
    Rectangle(double h,double w, string color);
    double getHeight();
    double getWidth();
    string getColor();
    void setHeight(double h);
    void setWidth(double w);
    void setColor(string c);
    double area();
    double perimeter();
    void toString();

};