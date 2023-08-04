#include <iostream>
using namespace std;

class shapes
{
protected:
    float width, length, area, perimeter;

public:
    void find_area()
    {
        area = length * width;
        perimeter = (length + width) * 2;
    }

    void display_area()
    {
        cout << "Area is: " << area << endl;
        cout << "Perimeter is: " << perimeter << endl;
    }
};
// child class 
class Rectangle : public shapes
{
public:
    void setDimensions()
    {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;
    }
};
//child class
class Square : public shapes
{
public:
    void setSide()
    {
        cout << "Enter side length: ";
        cin >> width;
        length = width; // Since it's a square, width and length are the same.
    }
};

int main()
{
    Rectangle rect;
    rect.setDimensions();
    cout << "For Rectangle:" << endl;
    rect.find_area();
    rect.display_area();

    Square sq;
    sq.setSide();
    cout << "For Square:" << endl;
    sq.find_area();
    sq.display_area();

    return 0;
}

