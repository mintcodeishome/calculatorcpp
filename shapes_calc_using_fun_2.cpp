#include <iostream>
using namespace std;

class shapes
{
//declaration of variables
private:
    int length, width, area,perimeter;
//  getting variables
public:
    void dimensions()
    {
        cout << "Enter the Length: " << endl;
        cin >> length;
        cout << "Enter the width: " << endl;
        cin >> width;

        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
// calculation
    void calculateArea()
    {
        area = length * width;
    }
    void calculateperimeter()
    {
        perimeter= (length + width) * 2;
    }

    void displayAns()
    {
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main()
{
	//calling the method and objects
    shapes myShape;
    myShape.dimensions();
    myShape.calculateArea();
    myShape.calculateperimeter();
    myShape.displayAns();

    return 0;
}


