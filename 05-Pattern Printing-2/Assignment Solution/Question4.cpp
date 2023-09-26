#include<iostream>
using namespace std;
int main(){
    /*
    Fourth Pattern:

      A B C D
      A B C
      A B
      A

     */  
    int row;
    char col;
    for ( row = 1; row <= 4; row++)
    {
        for ( col = 'A'; col <= 'D'-(row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }  
}