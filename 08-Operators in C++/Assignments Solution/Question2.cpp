#include<iostream>
using namespace std;
int main(){
    /*
    2: Even and Positive Number: Write a program 
    that prints “YES” if a given number is both 
    even and positive,otherwise it will print “NO”.
    */
   int num;
   cout<<"Please Enter your Number: ";
   cin>>num;
   if(num > 0 && (num % 2 == 0)){
    cout<<"Yes";
   }else{
    cout<<"No";
   }
}