#include<iostream>
using namespace std;
int main(){
    /* Pattern-03

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
    */
   //Method -1
    int n,row,col;
    cout<<"Enter number: ";
    cin>>n;
    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++)
            cout<<"  ";
        for(col=1;col<=2*row-1;col++)
            cout<<"* ";
        cout<<endl;
    }

    //Method -2(self)
    // int n,row,col;
    // cout<<"Enter number: ";
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     for(col=1;col<=row-1;col++)
    //         cout<<"  ";
    //     for(col=1;col<=(2*(n-row)+1);col++)
    //         cout<<"* ";
    //     cout<<endl;
    // }
}