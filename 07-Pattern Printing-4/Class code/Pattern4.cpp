#include<iostream>
using namespace std;
int main(){
    /*Pattern-04
    
* * * * * * * * 
* * *     * * * 
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *
    */
    int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for(row=n;row>=1;row--){
        //Print *
        for(col=1;col<=row;col++)
            cout<<"* ";
                //Space
        for(col=1;col<=(2*(n-row));col++)
            cout<<"  ";
            //Print *
        for(col=1;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
    for(row=1;row<=n;row++){
        //Print *
        for(col=1;col<=row;col++)
            cout<<"* ";
            //Space
        for(col=1;col<=(2*(n-row));col++)
            cout<<"  ";
            //Print *
        for(col=1;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
}