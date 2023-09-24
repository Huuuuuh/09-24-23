#include <iostream>
using namespace std;

// Local variables = declared inside a function or block {}
// Global variables = declared outside of all functions

// Try to avoid having global variables because it pollutes the global namespace (not secure)


void printNum();
int myNum = 3;      // Global variable

int main(){

    //int myNum = 1;      //Local variable
    printNum();
    cout << myNum;

    return 0;
}

void printNum(){
    int myNum = 2;          // Local variable
    cout << myNum;
}