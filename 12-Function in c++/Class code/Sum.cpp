#include<iostream>
using namespace std;
int sum(int a, int b){
    int ans = a+b;
    return ans;
}
int main(){
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    int result= sum(x,y);
    cout<<result;
}

