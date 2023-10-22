#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    cout<<"Enter "<<n<<" element in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break;
            
        }
    }
    

    cout<<"Array after Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}