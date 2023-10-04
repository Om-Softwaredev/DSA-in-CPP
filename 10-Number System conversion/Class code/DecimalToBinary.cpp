#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cout<<"enter your number: ";
    cin>>num;
    int n=num;
    while(num>0){
        // rem=num%2;
        rem=num&1;
        ans = rem * mul + ans;
        // num=num/2;
        num = num>>1;
        mul=mul*10;
    }
    cout<<"Binary of "<<n<<" is :"<< ans;
}