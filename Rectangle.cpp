//FILE: Rectangle.cpp
#include <cassert> 
#include <iomanip>
#include <iostream>
#include <string>
#include "Rectangle.h"

//namespace
using namespace std;

    
//DEFAULT Rectangle()
Rectangle::Rectangle()
{
    //SET values to width and height
    width = 1.0;
    height = 1.0;
}
    
//CONSTRUCTOR Rectangle(parameters: width, height)
Rectangle::Rectangle(double w, double h)
{
    //INITIALIZE width and height of parameterized objects
    width = w;
    height = h;
}
    
//METHOD getWidth() const returns a double
double Rectangle::getWidth() const
{
    return width;
}
    
//METHOD getHeight() const returns a double
double Rectangle::getHeight() const
{
    return height;
}
    
//METHOD getAread() returns width * height
double Rectangle::getArea()
{
    return width*height;
}
    
//METHOD getParameter() returns 2*width + 2*height
double Rectangle::getPerimeter()
{
    return (2*width) + (2*height);
}
    
//METHOD printRectangle(string objectName)
string Rectangle::printRectangle(string objectName)
{
    cout << std::fixed;
    cout << std::setprecision(1);
    //PRINT description of a rectangle object
    cout << "Rectangle " << objectName << " is " << width << " units wide and " << height << " units high." << endl; 
    return "";
}



