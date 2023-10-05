#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int fact(int n){
    int ans=1;
    for (int i = 1; i <= n; i++)
    {
        ans*=i;
    }
    return ans;  
}

int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<isPrime(a)<<endl;
    cout<<fact(a)<<endl;
    cout<<isPrime(b)<<endl;
    cout<<fact(b)<<endl;
    cout<<isPrime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
}