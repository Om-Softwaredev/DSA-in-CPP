#include<iostream>
using namespace std;
int main(){
    // 6.	Print Sum of cube of first n natural number
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <= n; i=i+1)
    {
        sum=sum+i*i*i;
    }  
    cout<<"Sum of cube of first "<<n<<" natural number is: "<<sum;
}