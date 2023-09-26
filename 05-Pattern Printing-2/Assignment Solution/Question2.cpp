#include<iostream>
using namespace std;
int main(){
    /*
        Second Pattern:
        A
        A B
        A B C
        A B C D
        A B C D E
     */  
    int row;
    char col;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 'A'; col <= 'A'+row-1; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }  
}