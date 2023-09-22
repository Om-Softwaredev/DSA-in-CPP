#include<iostream>
using namespace std;
int main(){
    // 3.	Take a number in input (ex n) and print the corresponding month to it. 
    //       Ex: for n=1, print january, n=2, print feburary like this you need to give output. 
    //      It is given that n will be greater than 0 and less than 13.
    int month;
    cout<<"Please Enter Month: ";
    cin>>month;
    if (month==1)
        cout<<"January";
    else if (month==2)
        cout<<"February";
    else if (month==3)
        cout<<"March";
    else if (month==4)
        cout<<"April";
    else if (month==5)
        cout<<"May";
    else if (month==6)
        cout<<"june";
    else if (month==7)
        cout<<"July";
    else if (month==8)
        cout<<"August";
    else if (month==9)
        cout<<"September";
    else if (month==10)
        cout<<"October";
    else if (month==11)
        cout<<"November";
    else if (month==12)
        cout<<"December";
    else
        cout<<"Please enter correct month";
    
}