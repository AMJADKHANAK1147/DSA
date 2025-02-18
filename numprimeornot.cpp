#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

     if(num<=1){
        cout<<num<<" is a nonprime number:";
     }else{
     bool is_true = true;

     for(int i=2;i*i<=num;i++){

        if(num%i == 0){
            is_true = false;
            break;
        }

     }
     if(is_true == true){
        cout<<num<<" is a prime number:";
     }else{
        cout<<num<<" is a non_prime number:";
     }
      
     }

    return 0;
}