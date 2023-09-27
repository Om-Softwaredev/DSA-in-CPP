#include<iostream>
using namespace std;
int main(){
    /*
        Pattern -02  
                1 
              2 2 
            3 3 3 
          4 4 4 4
        5 5 5 5 5   
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
           cout<<row<<" ";
        }
        cout<<endl;
    }
    
}