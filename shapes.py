class Shapes:
    # getting dimensions and declaration
    def calculate_area(self):
        length = float(input("Enter the length : "))
        width = float(input("Enter the width : "))

        area = length * width

        print("The area is:", area)


my_shape = Shapes()
my_shape.calculate_area()
