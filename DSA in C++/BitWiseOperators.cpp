#include<iostream>
using namespace std;

//Reverse a number;

int reverse(int number){

   int reversenumber =0;

   while(number > 0){

    
    int remainder = number%10;

    reversenumber = reversenumber * 10 + remainder;

    number/=10;


   }
   return reversenumber;
}



int main(){
   

  cout<< reverse(625);
    return 0;
}
