//https://practice.geeksforgeeks.org/problems/second-largest3735/1
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,6,4,3,8,5,1};
    int ans=INT_MIN;
    int second=INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>ans)
            ans=arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if ( ans != arr[i])
            second=max(second,arr[i]);
    }
    cout<<ans<<endl;//largest of all
    cout<<second;//second largest
}