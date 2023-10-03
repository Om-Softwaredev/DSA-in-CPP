#include<iostream>
using namespace std;
int main(){
    /*
    6: Give a number n, find if it is prime or not, 
    use a while loop and break here to solve it.
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=2;
    bool temp=1;
    while(i<n){
        if(n%i==0){
            temp=0;
            break;
        }
        i++;
    }
    if(temp)
        cout<<"Prime";
    else
        cout<<"Not prime";
}