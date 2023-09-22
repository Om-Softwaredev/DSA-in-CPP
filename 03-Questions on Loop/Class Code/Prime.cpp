#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<2){
        cout<<n<<" is Not Prime Number";
        return 0;
    }else{
        for (int i = 2; i < n; i++)
        {
           if (n%i==0)
           {    
                cout<<n<<" is Not Prime Number";
                return 0;
           } 
        }
         cout<<n<<" is Prime Number";
    }
}