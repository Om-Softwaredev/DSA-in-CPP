#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    cout<<"Enter 5 element in the array ";
    for (int i = 0; i < 5; i++)
        cin>>arr[i];
    
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of array is : "<<sum;
}