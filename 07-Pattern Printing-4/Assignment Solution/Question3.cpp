#include<iostream>
using namespace std;
int main(){
    /* Third Pattern: Take an input n from the user, 
    and create a pattern like below, 
    for n=5, we have output like this.
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A
    */
    int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        //Space Print
        for(col=1;col<=n-row;col++)
            cout<<"  ";
            //1 to  row
        for(char col='A';col<='A'+row-1;col++)
            cout<<col<<" ";

            //row-1 to 1
        for(char col='A'+row-2;col>='A';col--)
            cout<<col<<" ";
        cout<<endl;
    }
}