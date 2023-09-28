#include<iostream>
using namespace std;
int main(){
    /* Second Pattern: Take an input n from the user, 
    and create a pattern like below, 
    for n=5, we have output like this.

    */
    int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        //Space Print
        for(col=1;col<=n-row;col++)
            cout<<"  ";
            //1 to  2*row-1
        for(col=1;col<=2*row-1;col++)
            cout<<col<<" ";
        cout<<endl;
    }
}