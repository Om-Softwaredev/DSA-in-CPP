#include<iostream>
using namespace std;
int main(){
    // 4.	Ticket Price Calculator: Create a program that 
    // asks the user for their age and checks if they qualify for 
    // a discounted ticket price (e.g., under 12 and over 65 get discounts), 
    // If they are eligible print “YES” else “NO”.

    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age<12)
        cout<<"YES";
    else if (age>65)
        cout<<"YES";
    else
        cout<<"No";
}