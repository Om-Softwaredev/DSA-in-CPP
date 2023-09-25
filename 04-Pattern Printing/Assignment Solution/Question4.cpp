#include<iostream>
using namespace std;
int main(){
    /*
        Fourth Pattern:
        F G H I J K  
        F G H I J K
        F G H I J K
        F G H I J K
        F G H I J K
    */ 
   int row;
   char col;
   for ( row = 1; row <= 5; row++)
   {
    for ( col = 'F'; col <= 'K'; col++)
    {
        cout<<col<<" ";
    }
    cout<<endl;
   }   
}
