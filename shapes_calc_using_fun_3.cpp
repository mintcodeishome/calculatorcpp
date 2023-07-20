#include <iostream>
using namespace std;

class shapes
{
public:
    void dimensions()
    {
        int length, width;
        
        cout << "Enter the Length: " << endl;
        cin >> length;
        cout << "Enter the width: " << endl;
        cin >> width;

       
       //calling method
        calculateArea(length, width);
        calculatePerimeter(length, width);
    }
    
   

private:
    void calculateArea(int length, int width)
    {
        int area = length * width;
        cout << "Area: " << area << endl;
    }

    void calculatePerimeter(int length, int width)
    {
        int perimeter = (length + width) * 2;
        cout << "Perimeter: " << perimeter << endl;
    }
     void display(int area, int length, int width)
	{
		     cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
		
		
	}
};

int main()
{
    shapes myShape;
    myShape.dimensions();

    return 0;
}

