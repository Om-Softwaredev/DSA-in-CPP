#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -09  
        a a a a a 
        b b b b b 
        c c c c c 
        d d d d d 
        e e e e e  
     */  

    // int row,col,count=1;
    // for (row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<count<<" ";
    //         count=count+1;
    //     }
    //     cout<<endl;
    // } 


    //Method-2
    int row,col;
    for (row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= 5; col++)
        {
            cout<<((row-1)*5)+col<<" ";
        }
        cout<<endl;
    } 
}