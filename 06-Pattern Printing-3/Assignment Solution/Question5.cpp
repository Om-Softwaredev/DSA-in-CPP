#include<iostream>
using namespace std;
int main(){
    /*
Fourth Pattern: Take an input n from the user, 
and create a pattern like below, 
for n=5, we have output like this.
        E 
      E D 
    E D C 
  E D C B 
E D C B A  
    */
   int row,col,n;
    cout<<"Enter number: ";
    cin>>n;
    for ( row = 1; row <= n; row++)
    {       
        for ( col = 1; col <= n-row; col++)
        {
            cout<<"  ";
        }
        for ( char name='A'+n-1;name>='A'+(n-row);name--)
        {
            cout<<name<<" ";
        }
        cout<<endl;  
    }
}