#include<iostream>
using namespace std;
int main(){
    //Fibonacci series
    // int n,curr,last=0,prev=1;
    // cout<<"Enter Number ";
    // cin>>n;
    // cout<<last<<" "<<prev<<" ";
    // for (int i = 1; i < n-1; i++)
    // {
    //    curr=last+prev;
    //    last=prev;
    //    prev=curr;
    //    cout<<curr<<" ";
    // }


    //nth Fibonacci series
    int n,curr,last=0,prev=1;
    cout<<"Enter Number ";
    cin>>n;
    for (int i = 1; i < n-1; i++)
    {
       curr=last+prev;
       last=prev;
       prev=curr;
       
    }
    cout<<n<<"th fibonacii series is: "<<curr;
    

}