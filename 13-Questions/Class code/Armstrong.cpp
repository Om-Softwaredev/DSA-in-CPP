#include<iostream>
#include <cmath>
using namespace std;
 int countDigit(int num){
    int count =0;
    while (num)
    {
        count++;
        num /=10;
    }
    return count;
 }
 void isArmstrong(int num, int digit){
    int n=num,rem,ans=0;
    while(n>0){
        rem=n%10;
        n /= 10;
        ans += pow(rem,digit);
        cout<<ans<<endl;
    }
    
    if(ans==num)
        cout<<"Yes";
    else
        cout<<"No";
 }
 int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<pow(5,3);
    // int digit=countDigit(n);
    // isArmstrong(n,digit);
 }