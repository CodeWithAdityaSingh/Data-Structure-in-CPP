#include <iostream>
using namespace std;

int BinaryToDecimal(int number){
  int answer = 0;

  int power=1;

while(number > 0){

    
   int remainder = number%2;

   number  = number/2;

   answer += (remainder*power);

   power = power*10;



}
 return  answer;


}

int main(){
   

   cout << BinaryToDecimal(10);


  
return 0;
}