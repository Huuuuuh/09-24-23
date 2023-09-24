#include <iostream>
using namespace std;

int searchArray(string array[], int size, string element);



int main(){

    string foods[] = {"Hamburger", "Steak", "Fries", "Grilled Chicken", "Ramen"};
    int size = sizeof(foods) / sizeof(foods[0]);
    string myFood;
    int index;

    cout << "Which foods' index are you looking for?: " << endl;
    getline(cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        cout << "The index of " << myFood << " is " << index;
    }
    else{
        cout << "The item you are looking for is not in the array." << endl;
    }

    return 0;
}


int searchArray(string array[], int size, string element){
    for(int i=0; i < size; i++)
        if(array[i]==element){
            return i;
        }
    return -1;
}
