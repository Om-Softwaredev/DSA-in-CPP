#include<iostream>
using namespace std;

// swap(int a,int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
void swap(float &a,float &b){// function overloading
    float c;
    c=a;
    a=b;
    b=c;
}
int main(){
    int a,b;
    float x,y;
    cout<<"Enter two int number: ";
    cin>>a>>b;
    cout<<"Enter two float number: ";
    cin>>x>>y;
    cout<<"Before swapping a= "<<a<<" b= "<<b<<endl;
    swap(a,b);
    cout<<"After swapping a= "<<a<<" b= "<<b<<endl;
    cout<<"Before swapping x= "<<x<<" y= "<<y<<endl;
    swap(x,y);
    cout<<"After swapping x= "<<x<<" y= "<<y;

}
