#include <iostream>
using namespace std;

int main(){
    int scores[5];
    // Write a C++ statement that declares an array of 5 integers called scores.
    scores[2] = 90;
    // write another statement that assigns the value 90 to the third element in the array.
    // c++ counts from 0
    // 1st element: scores[0]
    // 2nd element: scores[1]
    // 3rd element: scores[2]
    cout << "The third element is: " << scores[2] << endl;
    return 0;
}
