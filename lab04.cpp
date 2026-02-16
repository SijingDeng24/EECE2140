#include <iostream>
using namespace std;


/* problem 6) 
     Reverse an Array In-Place
     You are given an array of integers. Write a C++ program that reverses the array in place (without 
     using another array).
    Example Input:
    int arr[] = {1, 3, 5, 7, 9};
    After Reversal:
    {9, 7, 5, 3, 1}
    */
void reverseArray(int array[], int n){
    for (int i = 0; i < n / 2; i++){
        // We only go up to n / 2 (the midpoint)
        int end_index = n - 1 - i;
        // Calculate the corresponding index from the end
        int temp = array[i];
        array[i] = array[end_index];
        array[end_index] = temp;
    }
    }


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
    cout << "Problem 1 \n" ; 
    cout << "The third element of array scores is: " << scores[2] << endl;
    
    /* problem 2) 
     Looping Through an Array
    */
    int nums[4] = {2, 4, 6, 8};
    cout << "Problem 2 \n" ; 
    for (int k = 0; k < 4; k++){
        cout << " Element number " << k + 1 << " is: " << nums[k] << endl;
        }

    /* problem 3) 
     Finding the Sum of the Elements of an Array
    */
    int values[6] = {3, 5, 1, 4, 2, 7};
    int sumValues = 0;
    for (int k = 0; k < 6; k++){
        sumValues += values[k];
    }
    cout << "Problem 3 \n" ; 
    cout << "the sum of the elements of the araay values[6] is" << sumValues << endl;

    /* problem 4) 
      Out-of-Bounds Thinking
    a) What is wrong with this statement?
       there are only 3 elements in the array, 
       so index max is 2 instead of 3.
       you cannot access value indexed as 3 
    b) What might happen when this program runs?
       -case 1:  it might return a value for arr[3], but it's a garbage value since
         it attempts to access the fourth element of an array 
         that only has a size of 3
       -case 2: might encounter [-Warray-bounds] error
       warning: array index 3 is past the end of the array (that has type 'int[3]')
       -case 3: if the "out-of-bounds" memory address belongs to 
       a restricted area or a different process, 
       the operating system will terminate your program immediately.
    c) How should it be corrected?
       1. change the index to 2
       2. change the lenth of the array to 4
    */
       cout << "Problem 4 \n" ; 
       // 1. change the index to 2 or under 2(greater than -1)
        int arr[3] = {10, 20, 30};
        cout << arr[2] << "\n"; 
       // 2. change the lenth of the array to 4
        int arr4[4] = {10, 20, 30, 40};
        cout << arr4[3] << "\n"; 

    
    /* problem 5) 
     Find the Largest and Smallest Element of an Array
    */
    int arr5[] = {7, 2, 9, 4, 1};
        int minArrary5 = arr5[0];
    for (int k = 0; k < 5; k++){
        if (arr5[k] < minArrary5){
            minArrary5 = arr5[k];
        }
    }
        int maxArrary5 = arr5[0];
    for (int k = 0; k < 5; k++){
        if (arr5[k] > maxArrary5){
            maxArrary5 = arr5[k];
        }
    }
    
    cout << "Problem 5 \n" ; 
    cout << "Min = " << minArrary5 << "\n";
    cout << "Max = " << maxArrary5 << "\n";

    /* problem 6) 
     Reverse an Array In-Place
     You are given an array of integers. Write a C++ program that reverses the array in place (without 
     using another array).
    Example Input:
    int arr[] = {1, 3, 5, 7, 9};
    After Reversal:
    {9, 7, 5, 3, 1}
    */
    int arrInput[] = {1, 3, 5, 7, 9};
    int i = 5;
    reverseArray(arrInput, 5);
    // Call the function (don't use [] in the call)
    cout << "after reversal: {";
    for (int k = 0; k < 5; k++){
        cout << arrInput[k] << (k < i - 1 ? "," : "");
    }
    cout << "}" << endl;

    return 0;
}
