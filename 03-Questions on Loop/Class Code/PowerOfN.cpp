#include<iostream>
using namespace std;
int main(){
    int n,pow,num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;
    num=n;
    for(int i=1;i<pow;i++){
        num=num*n;
    }
    cout<<n<<"^"<<pow<<" is: "<<num;
}