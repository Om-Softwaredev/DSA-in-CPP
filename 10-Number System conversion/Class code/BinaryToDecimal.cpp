#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cout<<"enter number: ";
    cin>>num;
    int n=num;
    while(num>0){
        rem=num%10;
        ans=rem*mul+ans;
        num/=10;
        mul*=2;
    }
    cout<<"Decimal of "<<n<<" is:"<<ans;
}
