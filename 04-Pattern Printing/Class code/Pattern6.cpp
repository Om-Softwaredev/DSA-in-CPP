#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -08  
        a b c d e 
        a b c d e 
        a b c d e 
        a b c d e 
        a b c d e  
     */  

    int row;
    char col;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 'a'; col <= 'e'; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    } 
}