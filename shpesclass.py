class Shapes:
    def dimensions(self):
        width = int(input("Enter width: "))
        length = int(input("Enter length: "))
        # calling function compute
        self.compute(length, width)

    def compute(self, length, width):
        area = length * width
        perimeter = (length + width) * 2
        # calling function display
        self.display(area, perimeter)

    def display(self, area, perimeter):
        print("Area is:", area)
        print("Perimeter is:", perimeter)


def main():
    # instantiating class and function
    shape = Shapes()
    shape.dimensions()


if __name__ == "__main__":
    main()
