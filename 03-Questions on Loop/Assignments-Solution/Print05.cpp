#include<iostream>
using namespace std;
int main(){
    // 5.	Print Sum of square of first n natural number.
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <= n; i=i+1)
    {
        sum=sum+i*i;
    }  
    cout<<"Sum of square of first "<<n<<" natural number is: "<<sum;
}