#include<iostream>
using namespace std;
int main(){
/*
        Pattern -04  
                  A 
                A B 
              A B C 
            A B C D 
          A B C D E 
        A B C D E F   
     */ 


    int n,row,col;
    char name;
    cout<<"Enter number: ";
    cin>>n;
    for ( row = 1; row <= n; row++)
    {
        for ( col = 1; col <= n-row; col++)
        {
            cout<<"  ";
        }
        for ( name = 'A'; name <= 'A'+row-1; name++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }   
}