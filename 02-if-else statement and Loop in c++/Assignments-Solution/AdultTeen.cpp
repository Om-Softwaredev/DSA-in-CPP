#include<iostream>
using namespace std;
int main(){
    //2.	Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age>=18)
        cout<<"You are An Adult";
    else
        cout<<"You are Teenager";
}