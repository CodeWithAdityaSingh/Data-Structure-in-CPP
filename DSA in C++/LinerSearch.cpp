#include <iostream>
using namespace std;

int linerSeach(){
     // Liner Search time complexity = O(n)
    // find the index of 8
    int arry[5] = {3,4,5,7,8};

   

    for(int i=0 ;i < sizeof(arry)/sizeof(int);i++){

        if(arry[i] == 7){

            return i;

        }
    }

    return -1;

}

int main(){
   

  cout << linerSeach();

return 0;
}