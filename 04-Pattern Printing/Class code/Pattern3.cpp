#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -05  
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
     */  
    int row,col;
    for (row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= 5; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    } 
}