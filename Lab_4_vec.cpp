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
