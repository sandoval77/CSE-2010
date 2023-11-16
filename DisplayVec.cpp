//DisplayVec.cpp
#include "DisplayVec.h"

/**
* @brief Construct a new Display Vec::Display Vec Object
*
*/
DisplayVec::DisplayVec(){

}
/**
* @brief prints the integers in v
*
* @param v
*/
      void DisplayVec::printVector(const vector<int> v){
            for(int i = 0; i < v.size(); i++){
                  cout << v[1] << endl;
            }
      }

/**
* @brief returns the memory size of a vector
*
* @param v
* @return int
*/
      int DisplayVec::getVectMemSize(const vector<int> v){
            int mem_size = 0;
            for(int i = 0; i < v.size(); i++) {
                  mem_size += sizeof(v[i]);// mem_size = mem_size + sizeof(v[i])    
            }
            return mem_size;
      }

/**
* @brief returns pointer to the adress of an element in v at the index
*
* @param v
* @param index
* @return const int*
*/
      const int * DisplayVec::getAddress(vector<int> v, int index){
            int * addr = &v[index];
            return addr;
      }
      
/**
* @brief Points the total size of the v and the memory locations of first, second, and last element
*
* @param v
*/
      void DisplayVec::printMetaVector(const vector<int> v){
            int mem_size = getVectMemSize(arr, v.size());
            int int_size = sizeof(v[0]);
            printf("Vector has %i number of integers. Each integer is worth %i bytes,totaling up to %i bytes of memory.\n", v.size(), int_size, mem_size);
            printf("Element at index %i is located at (%p)\n", 0, getAddress(v, 0));
            printf("Element at index %i is located at (%p)\n", 1, getAddress(v, 1));
            printf("Element at index %i is located at (%p)\n", size-1 ,getAddress(v,v.size()-1));
  
      } 

      
