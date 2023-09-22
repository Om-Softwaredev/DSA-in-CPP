#include<iostream>
using namespace std;
int main(){
    //1.	Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
    int a,b;
    cout<<"ENter First number: ";
    cin>>a;
    cout<<"ENter Second number: ";
    cin>>b;
    if(a>b)
        cout<<a<<" is Greater than "<<b;
    else
        cout<<b<<" is Greater than "<<a;
}


