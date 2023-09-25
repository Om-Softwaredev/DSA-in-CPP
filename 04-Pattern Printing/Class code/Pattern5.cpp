#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -07  
        a a a a a 
        b b b b b 
        c c c c c 
        d d d d d 
        e e e e e  
     */  

    int row,col;
    for (row = 1; row <= 5; row++)
    {
        char name = 'a' +(row-1);
        for ( col = 5; col >= 1; col--)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    } 
}