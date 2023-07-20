//create a class shapes
//in shapes create a function without parameters and return function 
//function shoud ask user to enter value L and W and compute area 
//and display the output  on the standard output
#include <iostream>
using namespace std;

class Shapes
{
	public:
		area()
		{
			//declare variables
			int Length;
			int Width ;
			int area;
			//Engage user
			
			cout << "Enter LENGTH : ";
			cin >> Length;
			cout << "Enter Width : ";
			cin >> Width;
			
			cout << endl << Length << " * " << Width << " = ";
			
			area = Length * Width;
			
			cout << area;
		}
};

int main ()
{
	//create object
	Shapes Rectangle;
	//call method
	Rectangle.	area();
	return 0;
}
