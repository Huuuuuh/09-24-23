#include <iostream>
using namespace std;

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[1]);
    int index;
    int myNum;

    cout << "What is the number you are searching for within the numbers array (1-10)?: " << endl;
    cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        cout << "The index of " << myNum << " is " << index << endl;
    } 
    else{
        cout << "The number you have provided is not within the array" << endl;
    }



    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}