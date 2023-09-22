#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if (num>0)
    {
        cout<<"Positive";
    }
    else if(num==0){
        cout<<"Zero";
    }else{
        cout<<"Negative";
    }
    
}