#include <iostream>
using namespace std;

// foreach loop = is a loop that eases the traversal over an iterable data set
// good for just showing elements in an array

int main(){

    string names[] = {"Katie", "SueBeen", "Henry", "Erik"};

    for(string name : names){
        cout << name << endl;
    }

    return 0;
}
