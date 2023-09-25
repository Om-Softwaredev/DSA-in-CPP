#include<iostream>
using namespace std;
int main(){
    /*
        Second Pattern:
        1 4 9 16 25
        1 4 9 16 25
        1 4 9 16 25
        1 4 9 16 25
        1 4 9 16 25
        1 4 9 16 25
    */ 
   int row,col;
   for ( row = 1; row <= 6; row++)
   {
    for ( col = 1; col <= 5; col++)
    {
        cout<<col*col<<" ";
    }
    cout<<endl;
   }   
}
