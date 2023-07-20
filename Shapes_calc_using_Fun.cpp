#include <iostream>
using namespace std;

class shapes
{
	public:
		void dimensions()
		{
			int length , width;
			cout << "Enter width : " << endl;
			cin  >> width;
			cout << "Enter length : " << endl;
			cin  >> length;
			// calling funtion compute
			compute( length,width);
			
		}
		void compute(int length,int width)
		{
			int area = length * width;
			int parameter = (length+width)*2;
			//calling function  display
			display(area,parameter);
		}
		void display(int area, int parameter)
		{ 
			cout << "Area is : " << area << endl;
			cout << "Parameter is :" << parameter << endl;
		
		}
};
int main()
{
	//instanciating class and function
	shapes shape;
	shape.dimensions();
	return 0;
}
