#include<iostream>
using namespace std;
int main(){
    /*1: Take a number n from the user and print 
    all the even numbers between 1 and n(inclusive). 
    Do this using while and do while loop separately.
    */
   //Method-1 using while loop
//    int n;
//    cout<<"Enter number: ";
//    cin>>n;
//    int i=1;
//    while(i<=n){
//     if(i%2==0)
//         cout<<i<<" ";
//     i++;
//    }

   //Method-2 using do-while loop
   int n;
   cout<<"Enter number: ";
   cin>>n;
   int i=1;
   do{
    if(i%2==0)
        cout<<i<<" ";
    i++;
   }while(i<=n);
}