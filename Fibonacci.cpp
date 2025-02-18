#include<iostream>
using namespace std;

    void fibonacci(int N){

        int firstDigit = 0;
        int secondDigit = 1;

        cout<<firstDigit<<" ";
        cout<<secondDigit<<" ";

        for(int i =1;i<N;i++){

            int nextDigit = firstDigit + secondDigit;
            cout<<nextDigit<<" ";

            firstDigit = secondDigit;
            secondDigit = nextDigit;

        }

    }

int main(){
    
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

    fibonacci(N);

}