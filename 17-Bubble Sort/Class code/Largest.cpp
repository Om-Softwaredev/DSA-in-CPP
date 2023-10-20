//find largest element in array and put it on last index of array
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<"Please enter "<<n<<" element in array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    cout<<"Array after replacement: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
}