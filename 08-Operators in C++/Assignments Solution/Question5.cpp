#include<iostream>
using namespace std;
int main(){
    /*
    5: What will be the result below according to the precedence table.
    a-> 2*3-48==5/4*6
    b-> 6<<2-4*8/2
    c-> 5>4<3/2-8%4+5
    d-> 14-8+92>>2+70
    */
   int a=(2*3-48==(5/4)*6);
   int b=((6<<2)-(4*8)/2);
   int c=(5>4<3/2-(8%4)+5);
   int d=((14-8+92>>2)+70);
   cout<<"a. "<<a<<endl;
   cout<<"b. "<<b<<endl;
   cout<<"c. "<<c<<endl;
   cout<<"d. "<<d<<endl;
}