#include<iostream>
using namespace std;

void Nfactorial(int N){

    int factorial = 1;

        for(int i=1;i<=N;i++){
            factorial*=i;
        }

        cout<<"Factorial = "<<factorial<<endl;

}

int main(){

    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

    Nfactorial(N);

    return 0;
}