//find index of smallest element in array
#include<iostream>
using namespace std;
int main(){
    int arr[6]={8,5,1,7,6,2};
    int index=0;
    for (int i = 1; i < 6; i++)
    {
        if (arr[i]<arr[index])
        {
            index=i;
        }
        
    }
    cout<<index;
    
}