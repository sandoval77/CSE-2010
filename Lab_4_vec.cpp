/***
* CSE 2010 Fall 2023
* Lab #4
* Daisy Sandoval 
* 11/15/23
*
* There are many different files that I have to link and organize using data structures, arrays,and vectors. In this lab I will really highlight some of the similarities and differences between arrays and vectors. This lab really emphasizes how both vectors and arrays use location to store elements.
*
* My biggest struggle with this lab was mostly syntax, especially dealing with randGenVec. For me to overcome this issue I had to first understand what randGenVec is in this case. RandGen we are using to call the class av and the function is able to populate the values inside the parenthesis. We are specifying the number of elements within our range.
*
***/
#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;

int main()
{
    //vector<int> v; //initialize vec
    const int CAPACITY = 10;
    vector<int> v(CAPACITY);
    
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec(); //initialize ArrayVec and DisplayVec
  
    int range = 15;
    int num_elem = 10; 
    av.randGenVec(test_vec, num_elem, range);// populate with values
    
    int test_vec_size = test_vec.size(); 
    cout << "Vector Element\n";
    disp.printVector(test_vec); 
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec)// display contents
}
