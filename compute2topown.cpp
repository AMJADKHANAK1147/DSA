#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    if(n==0){
        cout<<1;
    } else{
        cout<<(1<<n);
    }

    return 0;
}