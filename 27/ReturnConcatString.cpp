#include <iostream>
using namespace std;


string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}


int main(){

    string firstName = "Cacci";
    string lastName = "Lau";

    string fullName = concatStrings(firstName, lastName);

    cout << "Hello " << fullName << endl;

    return 0;
}
