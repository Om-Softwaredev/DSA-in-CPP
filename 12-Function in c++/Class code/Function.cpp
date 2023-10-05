#include<iostream>
using namespace std;
int sum(int a, int b){//function declaration
    //function defination
    int ans = a+b;
    return ans;
}
int mul(int m,int n){//function declaration
    return m * n;//function defination
}
void hello(){//function declaration
    cout<<"Hello everyone!";//function defination
}
int main(){
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    int result= sum(x,y);//function call
    cout<<"Sum: "<<result<<endl;
    cout<<"Mulltiplication: "<<mul(x,y)<<endl;//function call
    hello();//function call
}

