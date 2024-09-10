// Conditional Statement and Loop

#include <iostream>
using namespace std;

int main(){

// eligible for Vote
// int age;

// cout << "Enter Your Age : " ;
// cin >> age;

// if(age > 18 && age <80){
//     cout << "You Can Vote";
// }
// else{
//     cout << "You Can't Vote";
// }

// Find Number is positive or negative

// int number;
// cout << "Enter Number fot find positive or negative : ";
// cin >> number;
// if(number >= 0) cout << "Positive Number";

// else cout << "Nagative Number";

// Number is even or Odd

// int Number;

// cout << "Enter Number : ";
// cin >> Number;

// if(Number %2==0){

//     cout << "Number is Even";

// } else {
//     cout << "Number is Odd";

// }

// Grade of Student

// int Marks ;

// cout << "Enter Marks of Student : ";
// cin >> Marks;

// if(Marks >=80 &&  Marks <=100){
//     cout << "First Class With Distinction\n";
// } else if(Marks >=60 && Marks <= 80) {
//     cout << "First Class\n";
// } else {
//     cout << "Pass\n";
// }

// Number is upper Case or Lower Case
// int Character;

// cout << "Enter Charatcer  : ";
// cin >> Character;

//  cout << (Character ? "Charatcter is  True" :  "Character is false");


// int number = 1;

//  while(number <=5){

//     cout << number<< endl;
//     number++;
//  }
 

// for(int i=0 ; i <10; i++){

//     cout << i << endl;
//  }

// return 0;

// int sum = 0;
// for(int i= 1 ; i <= 10; i++){
   
// sum+=i;
 
// }

// cout<< "Sum : = " << sum;

// int sum =0;

// int i=1;

// while(i<=10){

//     sum+=i;

//     if(sum == 50) break;
//      i++;
// }

// cout<< "sum : = " <<sum << endl; 

// int sum =0;
// for(int i=0 ; i <= 5; i++){
//    if(i%2 ==1){

//     sum+=i;
//    }
    
// }

// cout << "Sum : = " << sum;


// int sum =0;
// int i=0;
// int n=10;

// while(i<=n){

//     if(i%2==1){

//         sum+=i;
//     }
//     i++;
// }

// cout << sum << endl;
// int a = 0;

// do{
//     cout << "Aditya\n";
//      a++;
// }while(a<10);

// Number is prime or not


// int number;
// bool isPrime = true;

// cout << "Enter Number";

// cin>> number;

// for(int i=2; i<number-1; i++){

//     if(number % i == 0){

//       isPrime = false;
//       break;
//     }

// }
// cout << (isPrime ?  "Prime Number" :  "Non Prime");


// for(int i=0 ; i <=5; i++){

//     for(int j=1; j<=5;j++){
    
//       cout << "*";

//     }

//     cout << endl;
// }

// int sum =0;

// for(int i=1 ; i <=10; i++){

//   if(i%3==0){
//    sum+=i;
//   }

// }
//   cout<<sum<<endl;


int factorial = 1;

for(int i=1; i<=7;i++){
  
  factorial*=i;

}

cout << factorial<<endl;


  
  return 0;

}