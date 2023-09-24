#include <iostream>
using namespace std;

// function = a block of reusable code

string one = "Hello";
string two = "Testing";
int three = 123;

//  void testingThis(string one, string two, int three);   -> Declaration is needed when your code isnt sequential.
void testingThis(string one, string two, int three){
    cout << "This is Test 1: " << one << endl;
    cout << "This is Test 2: " << two << endl;
    cout << "This is Test 3: " << three << endl;
}

int main(){

    testingThis(one, two, three);

    return 0;
}