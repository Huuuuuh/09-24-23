#include <iostream>
using namespace std;

// BUBBLE SORT

void sort(int array[], int size);

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i = 0; i < size; i++){               // i loop is going to run size times; it will run the number of times as there are elements
        for(int j = 0; j < size - 1; j++){       // j loop is going to run until index of size - 1; the number of elements -1
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}