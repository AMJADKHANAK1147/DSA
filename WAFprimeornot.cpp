#include<iostream>
using namespace std;

    void primeORnot(int Num){


        if (Num <= 1) {
            cout << Num << " is a Nonprime number" << endl;
            return;
        }

        bool prime = true;

        for(int i=2;i<Num;i++){

            if(Num%i==0){
                prime  = false;
                break;
            }

        }
        if(prime == true){
            cout<<Num<<" is a prime number"<<endl;
        }else{
            cout<<Num<<" is a Nonprime number"<<endl;
        }

    }

int main(){

    int Num;
    cout<<"Enter the value of Num: ";
    cin>>Num;

    primeORnot (Num);

    return 0;
}