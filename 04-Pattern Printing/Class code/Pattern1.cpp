#include<iostream>
using namespace std;
int main(){
    //Pattern -01  * * * * *
    // for (int i = 1; i <= 5; i++)
    // {
    //        cout<<"*"<<" ";
    // }

    /*
        Pattern -02  
        * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *
     */   
    // int row,col;
    // for (row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <= 5; col++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }   


    /*
        Pattern -03  
        10 10 10 10 10 
        10 10 10 10 10 
        10 10 10 10 10 
        10 10 10 10 10 
     */   
    int row,col;
    for (row = 1; row <= 4; row++)
    {
        for ( col = 1; col <= 5; col++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    }   
}