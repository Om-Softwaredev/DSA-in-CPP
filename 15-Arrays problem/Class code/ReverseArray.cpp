#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<"Array before Reeversing: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Method=1
    // int temp[6];
    // int i=5,j=0;
    // while(i>=0){
    //     temp[j]=arr[i];
    //     i--;
    //     j++;
    // }

    // i=0;
    // j=0;
    // while(j<6){
    //     arr[i]=temp[j];
    //     j++;
    //     i++;
    // }

    // Method-2
    int start=0,end=5;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Array After Reeversing: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}