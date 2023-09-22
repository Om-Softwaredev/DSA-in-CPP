#include<iostream>
using namespace std;
int main(){
    //pringting 100-200
    // for (int i = 100; i <= 200; i++)
    // {           
    //     cout<<i<<" ";
    // }

    //pringting a-z
    // for (char name = 'a'; name <= 'z'; name++)
    // {           
    //     cout<<name<<" ";
    // }
    
    //pringting n-1
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for (int i = n; i >= 1; i--)
    // {           
    //     cout<<i<<" ";
    // }

    //pringting every 3rd number from 1-n 
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for (int i = 1; i <= n; i=i+3)
    // {           
    //     cout<<i<<" ";
    // }

    //Print table of n
    //Method-1
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for (int i = 1; i <= 10; i=i+1)
    // {           
    //     cout<<n<<" * "<<i<<"   = "<<n*i<<endl;
    // }

    //Method-1
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = n; i <= 10*n; i=i+n)
    {           
        cout<<i<<endl;
    }

}