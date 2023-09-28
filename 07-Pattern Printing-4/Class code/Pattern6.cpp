#include<iostream>
using namespace std;
int main(){
    /*Pattern-06
    
   * 
  * * 
 * * * 
* * * * 
* * * * 
 * * * 
  * * 
   * 
    */
    // int row,col,n;
    // cout<<"Enter number: ";
    // cin>>n;
    // for(row=1;row<=n;row=row+1){
    //     for(col=1;col<=n-row;col++)
    //         cout<<" ";
    //     for(col=1;col<=row;col++)
    //         cout<<"* ";
    //     cout<<endl;
    // }
    // for(row=n;row>=1;row=row-1){
    //     for(col=1;col<=n-row;col++)
    //         cout<<" ";
    //     for(col=1;col<=row;col++)
    //         cout<<"* ";
    //     cout<<endl;
    // }

    /*Pattern-06
    
   *
  * *
 * * *
* * * *
 * * *
  * *
   *

    */
    int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for(row=1;row<=n;row=row+1){
        for(col=1;col<=n-row;col++)
            cout<<" ";
        for(col=1;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
    for(row=n-1;row>=1;row=row-1){
        for(col=1;col<=n-row;col++)
            cout<<" ";
        for(col=1;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
    
}