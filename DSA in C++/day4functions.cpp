#include <iostream>
using namespace std;


// void printHellow(){

//     cout<<"My name is Aditya\n";
// }


// int sum(int a,int b){

//  int summ = a+b;

//  return summ;
// }


// int factorianN(int n){
//    int factorial = 1;

//    for(int i=1;i<=n;i++){

//     factorial*=i;
//    }

//    return factorial;
// }

// int digits(int n){

//     int sum =0;
 
//    while(n>0){

//     int lastDigit = n%10;

//      sum+=lastDigit;

//       n/=10;


//    }


//    return sum;
// }



// int add(){
//    int sum=0;
//     for(int i=0 ;i<10;i++){

//      sum+=i;
//     }

//     return sum;
// }


// int FactorialN(int n){
//    int factor = 1;

//    for(int i=1;i<=n;i++){

//     factor*=i;
//    }

//    return factor;


// }

// int FactorialR(int r){
//    int factor =1;



//    for(int i=1;i<=r;i++){
//     factor*=i;
       
//    }

//    return factor;
// }

// int NCR(int r,int n){

//     int data1 = FactorialN(n);
 
//     int data2 = FactorialR(r);

//     int minus = FactorialN(n-r);

//     int data3 =  data1/(data2 * minus);

//     return data3;


// }

void primeNumber(){
  int n=10;
    for(int i=2;i<=n;i++){
     if(i % 1==0 && i % i+2 ==0){

        cout <<i;
     }

    }
}






int main(){



  primeNumber();

    // int n=8, r=6;

    // int data4= NCR(r,n);
    // cout <<data4;

 



    // cout << digits(143) << endl;

    // cout << add();

    // int result = sum(3,4);

    // cout<<result <<endl;

    // int result2 = factorianN(4);

    // cout<< result2 << endl;




//   cout << "aditya";
  return 0;
}
