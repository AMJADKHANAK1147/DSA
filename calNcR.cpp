#include<iostream>
using namespace std;

int  Nfactorial(int N){

    int factorial = 1;

        for(int i=1;i<=N;i++){
            factorial*=i;
        }

        return factorial;

}

int main(){

    int N,R;
    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"Enter the value of R: ";
    cin>>R;
    int C = N-R;

    cout<< "NcR = "<<Nfactorial(N)/(Nfactorial(R)*Nfactorial(C));


    return 0;
}