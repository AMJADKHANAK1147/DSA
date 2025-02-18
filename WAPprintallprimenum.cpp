#include<iostream>
using namespace std;

    void printPrime(int N){

       for(int i=2;i<=N;i++){

           bool prime =true;
           for(int j=2;j<i;j++){

            if(i%j==0){
                prime = false;
                break;
            }
            

           }

           if(prime == true){
            cout<<i<<" ";
        }

       }

    }

int main(){

    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

    printPrime(N);

    return 0;
}