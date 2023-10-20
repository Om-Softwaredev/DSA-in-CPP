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

    cout<<"Array before sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i = n-2; i >= 0; i--)
    {   bool swapped=0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }     
        }
        if (swapped==0)
        {
            break;
        } 
    }
    
    cout<<"Array after sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
}