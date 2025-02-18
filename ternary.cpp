#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number :";
    cin>>num;

        // num%2 == 0?cout<<num<<" is a even number:";: cout<<num<<" is a odd number:";
        cout<<(num%2 == 0?"even":"odd");

    return 0;
}