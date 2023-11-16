/***
* CSE 2010 Fall 2023
* Lab #4
* Daisy Sandoval 
* 11/15/23
*
* There are eight different files that I have to link and orginize using data structures, arrays,and vectors. 
*
* {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
* the directions of how you PLAN to solve it}
*
***/
#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;

int main()
{
    vector<int> test_vec; //initialize vec
    
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec(); //initialize ArrayVec and DisplayVec
  
    int range = 15;
    int num_elem = 10; 
    av.randGenVec(test_vec, num_elem, range);// populate with values
    
    int test_vec_size = av.getSize(test_vec.data(), test_vec.size()); 
    cout << "Vector Element\n";
    disp.printVector(test_vec); 
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec, test_vec_size) //is the Test_vec_size correct ?
    // display contents
}
