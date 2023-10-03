#include<iostream>
using namespace std;
int main(){
    /*
    2: Find the factorial of a number n using a while loop and do a while loop.
    */

   // using While loop
//    int n;
//    cout<<"Enter number: ";
//    cin>>n;
//    int i=1,fact=1;
//    while(i<=n){
//     fact=fact*i;
//     i++;
//    }
//    cout<<"Factorial of "<<n<<" is: "<<fact;

   // using do-While loop
   int n;
   cout<<"Enter number: ";
   cin>>n;
   int i=1,fact=1;
   do{
    fact=fact*i;
    i++;
   }while(i<=n);
   cout<<"Factorial of "<<n<<" is: "<<fact;
}