#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;//size of array
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter element in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Array before sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for (int i = 0; i < n-1; i++)
    {
        int index=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[index])
                index=j;
        }
        swap(arr[index],arr[i]);
    }
    cout<<"Array After sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}