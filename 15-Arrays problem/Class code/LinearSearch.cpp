#include<iostream>
using namespace std;
int main(){
    int arr[9]={12,27,5,8,3,11,7,9,4};
    int target,ans;
    bool flag=false;
    cout<<"Enter element to be searched in array: ";
    cin>>target;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]==target){
            ans=i;
            flag=true;
            break;
        }
            
    }
    if (flag)
    {
        cout<<target<<" is present at index : "<<ans<<endl;
    }else{
        cout<<target<<" is not found in given array";
    }
    
    
}