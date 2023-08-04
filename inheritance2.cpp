#include <iostream>
using namespace std;

class shapes
{
private:
    float width, length, area, perimeter;

private:
    float find_area(float length, float width)
    {
        return length * width;
    }

    float find_perimeter(float length, float width)
    {
        return (length + width) * 2;
    }

    void display_area(float area, float perimeter)
    {
        cout << "Area is: " << area << endl;
        cout << "Perimeter is: " << perimeter << endl;
    }

public:
    // Public member functions to set dimensions and display the area and perimeter
    void setDimensions(float w, float l)
    {
        width = w;
        length = l;
        area = find_area(length, width);
        perimeter = find_perimeter(length, width);
    }

    void showAreaAndPerimeter()
    {
        display_area(area, perimeter); // Call the private function from the public member function
    }
};

class Rectangle : public shapes
{
public:
    using shapes::setDimensions; // Make the setDimensions function public within the Rectangle class

    // Other functions specific to Rectangle
};

class Square : public shapes
{
public:
    using shapes::setDimensions; // Make the setDimensions function public within the Square class

    // Other functions specific to Square
};

int main()
{
    Rectangle rect;
    float width, length;
    cout << "Enter width and length for Rectangle: ";
    cin >> width >> length;
    rect.setDimensions(width, length);
    cout << "For Rectangle:" << endl;
    rect.showAreaAndPerimeter(); // Call the public function to display area and perimeter

    Square sq;
    float side;
    cout << "Enter side length for Square: ";
    cin >> side;
    sq.setDimensions(side, side);
    cout << "For Square:" << endl;
    sq.showAreaAndPerimeter(); // Call the public function to display area and perimeter

    return 0;
}

