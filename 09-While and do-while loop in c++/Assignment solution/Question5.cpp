#include<iostream>
using namespace std;
int main(){
    /*
    5: Print all the Capital and small letters  using a while loop. 
    It means A-Z, then a-z.
    */
    char c='A';
    while(c<='Z'){
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
    char ch='a';
    while(ch<='z'){
        cout<<ch<<" ";
        ch++;
    }
}