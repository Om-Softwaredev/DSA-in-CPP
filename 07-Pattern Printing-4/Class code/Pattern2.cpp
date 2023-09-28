#include<iostream>
using namespace std;
int main(){
    /* Pattern-02
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
    */
    int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        //Space Print
        for(col=1;col<=n-row;col++)
            cout<<"  ";
            //1 to  row
        for(col=1;col<=row;col++)
            cout<<col<<" ";

            //row-1 to 1
        for(col=row-1;col>=1;col--)
            cout<<col<<" ";
        cout<<endl;
    }
}