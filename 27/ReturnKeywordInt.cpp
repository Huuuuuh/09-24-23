#include <iostream>
using namespace std;

// return = returns a value back to the spot
//          where you called the encompassing function.

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

int main(){

    double length;
    cout << "What is the length?: ";
    cin >> length;
    double area = square(length);
    double volume = cube(length);

    cout << "The area is " << area << "cm^2" << endl;
    cout << "The volume is " << volume << "cm^3" << endl;
    
    return 0;
}