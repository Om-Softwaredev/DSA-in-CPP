#include<iostream>
using namespace std;
int main(){
    // int i;
    // cout<<"enter Number: ";
    // cin>>i;
    // Program -1

    // switch (i)
    // {
    // case 1:
    //     cout<<"Rohit";
    //     break;
    // case 2:
    //     cout<<"Mohit";
    //     break;
    // default:
    //     cout<<"Sohit";
    //     break;
    // }

// Program -2 without break
    // switch (i)
    // {
    // case 1:
    //     cout<<"Rohit";
    // case 2:
    //     cout<<"Mohit";
    //     break;
    // default:
    //     cout<<"Sohit";
    // }

    // Program -3
    int day;
    cout<<"enter your day number: ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Enter correct number";
        break;
    }
}