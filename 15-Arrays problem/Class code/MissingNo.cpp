#include<iostream>
using namespace std;
int main(){
    int size=6;
    int n=size;
    int arr[size-1] ={1,3,4,5,6};
    
    //Sum of all lement present in array
    int sum=0;
    for (int i = 0; i < size-1; i++)
    {
            sum+=arr[i];
    }
    int totalSum= (n*(n+1))/2;
    int ans= totalSum-sum;
    cout<<"Missing No. is : "<<ans;

    
}