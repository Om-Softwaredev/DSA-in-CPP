#include<iostream>
using namespace std;
char convert(char ch){
    char ans = ch-'a'+'A';
    return ans;
}
int main(){
    char name;
    cout<<"Enter your character in small letter: ";
    cin>>name;
    char result=convert(name);
    cout<<name<<" in capital letter is: "<<result;
}