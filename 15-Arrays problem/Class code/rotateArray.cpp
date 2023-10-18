#include<iostream>
using namespace std;
int main(){
    //Method -1
    // int arr[6]={2,7,4,11,5,8};
    // int newarr[6];
    // newarr[0]=arr[5];

    // for (int i = 1; i < 6; i++)
    //     newarr[i]=arr[i-1];

    // for (int i = 0; i < 6; i++)
    //     arr[i]=newarr[i];

    // for (int i = 0; i < 6; i++)
    //     cout<<arr[i]<<" ";

    //Method-2

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int temp=arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
}