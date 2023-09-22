#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your Number: ";
    cin>>num;
    if (num==1)
        cout<<"Sunday";
    else if(num==2)
        cout<<"Monday";
    else if(num==3)
        cout<<"Tuesday";
    else if(num==4)
        cout<<"Wednesday";
    else if(num==5)
        cout<<"Thursday";
    else if(num==6)
        cout<<"Friday";
    else if(num==7)
        cout<<"Saturday";
    else
        cout<<"Enter valid day";
    
}