#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -08  
        5 
        5 4
        5 4 3
        5 4 3 2
        5 4 3 2 1   
     */  
    int row,col;
    for (row = 1; row <= 5; row++)
    {
        for ( col = 5;col>=5-row+1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    } 

}