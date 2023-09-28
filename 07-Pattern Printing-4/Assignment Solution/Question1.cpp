#include<iostream>
using namespace std;
int main(){
    /*
    First Pattern: Take an input n from the user,
     and create a pattern like below, 
     for n=5, we have output like this.
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

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
}