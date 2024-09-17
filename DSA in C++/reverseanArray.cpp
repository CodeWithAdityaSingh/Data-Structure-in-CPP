#include <iostream>
using namespace std;

void reverseAnArray(){
 

  // we used here two pointer operations 1: start = 0   2: end = (sizeof(arry)/sizeof(int))-1 and condition 
  // while(start<end);
    int arry[5] = {3,4,5,7,3};



    int start = 0;

    int end = (sizeof(arry)/sizeof(int)-1);
    int end2 = (sizeof(arry)/sizeof(int));



    while(start <= end){
      
      swap(arry[start],arry[end]);

      start++;

      end--;

    }

    for(int i=0 ;i < (sizeof(arry)/sizeof(int));i++){

        cout << arry[i] << " ";
    }

  
}

int main(){


    reverseAnArray();

    
return 0;
}