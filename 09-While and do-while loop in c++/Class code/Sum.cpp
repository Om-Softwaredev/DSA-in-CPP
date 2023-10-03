#include<iostream>
using namespace std;
int main(){
    int i=1;//initialize
    int sum=0;
    do{
        sum+=i;
        i++;// update
    }while (i<=10);//break condition
    cout<<"sum is: "<<sum;
    
}