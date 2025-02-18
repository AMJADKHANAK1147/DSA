#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
     int sum = 0;

     for(int i=1;i<=num;i+=2){

        sum = sum+i;
     }

     cout<<"sum = "<<sum;


    return 0;
}