#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
    Rectangle n1;
    Rectangle rec1(3, 4, "Green");

    cout << "The height of default is: " << n1.getHeight() << endl;
    cout << "The width of default is: " << n1.getWidth() << endl;
    cout << "The color of default is: " << n1.getColor() << endl;
    

    n1.setHeight(10);
    n1.setWidth(20);
    n1.setColor("Yellow");
    
     cout << "The  new height of default is: " << n1.getHeight() << endl;
    cout << "The  new width of default is: " << n1.getWidth() << endl;
    cout << "The new color of default is: " << n1.getColor() << endl;
    

    cout << "The area of default is: " << n1.area() << endl;
    cout << "The perimeter of default " << n1.perimeter() << endl;
    n1.toString();
}








