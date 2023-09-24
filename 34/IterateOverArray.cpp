#include <iostream>
using namespace std;

int main(){

    string students[]={"Spongebob", "Patrick", "Squidward", "Sandy", "MrCrab"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

   // for(int i = 0; sizeof(students)/sizeof(string); i++){           // This will loop through all the elements
    //    cout << students[i] << endl;
   // }

    for (int j = 0; j < sizeof(grades) / sizeof(char); j++){
            cout << grades[j] << endl;
    }

    return 0;
}
