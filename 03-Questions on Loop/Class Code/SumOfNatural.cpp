#include<iostream>
using namespace std;
int main(){
    //Method-1
    // int n,sum=0;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //    sum=sum+i;
    // }
    // cout<<"sum of "<<n<<" natural number is: "<<sum;

    //Method-2
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"sum of "<<n<<" natural number is: "<<(n*(n+1))/2;
}