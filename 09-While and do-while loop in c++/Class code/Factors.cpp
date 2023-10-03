#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Factors of "<<n <<" is: ";
    while(i<=n){
        if(n%i==0)
            cout<<i<<" ";
        i=i+1;
    }
}