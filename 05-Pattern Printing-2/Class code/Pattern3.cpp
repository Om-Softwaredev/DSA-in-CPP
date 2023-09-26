#include<iostream>
using namespace std;
int main(){
    /*  Pattern-03
        1 
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
    */

    int row,col;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= row; col++)
        {
           cout<<row<<" ";
        }
        cout<<endl;
    }
    
}