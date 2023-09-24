#include <iostream>
using namespace std;

// sizeof() = determines the size in bytes of a variable, data type, class, objects, etc..


int main(){

    string name = "Cacci Lau";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[]={'A', 'B', 'C', 'D', 'F'};
    string students[]={"Spongebob", "Patrick", "Squidward", "Sandy"};

    cout << sizeof(bool) << " bytes" << endl;
    cout << sizeof(grades)/sizeof(char) << " elements" << endl;          // To calculate size of array
    cout << sizeof(students)/sizeof(string) << " elements" << endl;

    return 0;
}
