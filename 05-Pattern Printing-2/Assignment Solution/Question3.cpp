#include<iostream>
using namespace std;
int main(){
    /*
       Third Pattern:
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15
     */  
    int row,col;
    for ( row = 1; row <= 6; row++)
    {
        for ( col = 10; col <= 10+row-1; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }  
}