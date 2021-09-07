//FILE: Rectangle.h
//CLASS PROVIDED: Rectangle

#ifndef RECTANGLE_HEADER
#define RECTANGLE_HEADER



//CLASS
class Rectangle
{
    //ACCESS SPECIFIER public
    public:
    
        //CONSTRUCTORS
        Rectangle();
        Rectangle(double width, double height);
        
        //MODIFICATION MEMBER FUNCTIONS
        void setWidth(double);
        void setHeight(double);

        //CONSTANT MEMEBER FUNCTIONS
        double getWidth() const; 
        double getHeight() const;
        double getArea();
        double getPerimeter();
        std::string printRectangle(std::string objectName);
    
    //ACCESS SPECIFIER private    
    private:
    
        //VALUE SEMANTICS
        double width;
        double height;
};
//END CLASS



#endif
