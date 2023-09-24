#include <iostream>
using namespace std;

// fill() = Fills a range of elements with a specified value
//          fill(begin, end, value)


int main(){

    const int SIZE = 99;

    string foods[SIZE];


    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE * 2/3), "hamburger");
    fill(foods + (SIZE * 2/3), foods + SIZE, "hotdogs");

    for(string food : foods){
        cout << food << endl;
    }

    return 0;
}
