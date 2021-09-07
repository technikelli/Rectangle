//FILE: TestRectangle.cpp
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <cassert>
#include "Rectangle.h"


//namespace
using namespace std;

//MAIN BEGIN
int main() {
    //CREATE double herWidth, herHeight
    double herWidth;
    double herHeight;
    
    //READ user input
    cout << "Enter Width: " ;
    cin >> herWidth;
    cout << "Enter Height: ";
    cin >> herHeight;
    cout << endl;
 
   
    //CREATE object1 myRectangle 
    Rectangle myRectangle;
    //CREATE object2 herRectangle
    Rectangle herRectangle(herWidth, herHeight);
    
    
    //OUTPUT to console for myRectangle and format it
    cout << std::fixed;
    cout << std::setprecision(2);
    cout << "myRectangle:" << endl;
    cout << "-----------" << endl;
    cout << "Width: "; 
    cout.setf(ios::right, ios::adjustfield);
    cout.width(10);
    cout << myRectangle.getWidth() << endl;
    cout << "Height: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(9);
    cout << myRectangle.getHeight() << endl;
    cout << "Area: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(11);
    cout << myRectangle.getArea() << endl;
    cout << "Perimeter: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(6);
    cout << myRectangle.getPerimeter() << "\n" << endl;

    //CALL printRectangle function
    myRectangle.printRectangle("myRectangle");
 
    
    //OUTPUT to console for herRectangle and format it
    cout << std::fixed;
    cout << std::setprecision(2);
    cout << "\nherRectangle:" << endl;
    cout << "-----------" << endl;
    cout << "Width: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(10);
    cout << herRectangle.getWidth() << endl;
    cout << "Height: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(9);
    cout << herRectangle.getHeight() << endl;
    cout << "Area: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(11);
    cout << herRectangle.getArea() << endl;
    cout << "Perimeter: ";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(6);
    cout << herRectangle.getPerimeter() << "\n" << endl;
    
    //CALL printRectangle function
    herRectangle.printRectangle("herRectangle");
    
    //EXIT_SUCCESS
    return EXIT_SUCCESS;
    
//MAIN END
}


