#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]= {5,8,9,2,7};
    int ans = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>ans)
            ans=arr[i];
    }
    cout<<"Maximum in array is : "<<ans;
}