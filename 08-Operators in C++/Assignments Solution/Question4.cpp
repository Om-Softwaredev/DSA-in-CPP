#include<iostream>
using namespace std;
int main(){
    /*
    4: Take three numbers a,b,c from the user, 
    print yes if a is either greater than b or c. 
    Otherwise print NO.
    */
   int a,b,c;
   cout<<"Please Enter value of a: ";
   cin>>a;
   cout<<"Please Enter value of b: ";
   cin>>b;
   cout<<"Please Enter value of c: ";
   cin>>c;
   if(a>b || a>c){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
}