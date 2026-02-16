#include <iostream>
using namespace std;

int main(){
    /* problem 1) 
    Declaring and Accessing Array Elements
    */
    int scores[5];
    // Write a C++ statement that declares an array of 5 integers called scores.
    scores[2] = 90;
    // write another statement that assigns the value 90 to the third element in the array.
    // c++ counts from 0
    // 1st element: scores[0]
    // 2nd element: scores[1]
    // 3rd element: scores[2]
    cout << "The third element of array scores is: " << scores[2] << endl;
    
    int nums[4] = {2, 4, 6, 8};
    for (int k = 0; k < 4; k++){
        cout << " Element number " << k + 1 << " is: " << nums[k] << endl;

    }
    return 0;
}
