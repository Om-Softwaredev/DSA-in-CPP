#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -03  
                  1 
                1 2 
              1 2 3 
            1 2 3 4 
          1 2 3 4 5 
        1 2 3 4 5 6    
     */ 
    int n,row,col;
    cout<<"Enter number: ";
    cin>>n;
    for ( row = 1; row <= n; row++)
    {
        //Space Printing
        for ( col = 1; col <= n-row; col++)
        {
           cout<<"  ";
        }
        //Number Printing
        for ( col = 1; col <=row; col++)
        {
           cout<<col<<" ";
        }
        cout<<endl;
    }
    
}