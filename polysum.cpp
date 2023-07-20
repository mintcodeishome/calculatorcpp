#include <iostream>
using namespace std;

class Calc {
public:
    int add(int fnum, int sec) {
        int sum = fnum + sec;
        return sum;
    }

    int add(int fnum, int sec, int third) {
        int sum = fnum + sec + third;
        return sum;
    }
};

int main() {
    Calc add1;
    int fnum, sec,third;

    cout << "Enter number: ";
    cin >> fnum;
    cout << "Enter number: ";
    cin >> sec;

    int result = add1.add(fnum, sec);
    cout << "Sum is = " << result << endl;
    
    

    cout << "Enter number: ";
    cin  >> fnum;
    cout << "Enter number: ";
    cin  >> sec;
    cout << "Enter number: ";
    cin  >> third;

    int result2 = add1.add(fnum, sec,third);
    cout << "Sum is = " << result2 << endl;
    

    return 0;
}


