#include<iostream>
using namespace std;

int sumofNnum(int N){

    int sum =0;

    for(int i=0;i<=N;i++){
        sum+=i;
    }

        return sum;
}

int main(){

    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

   cout<<"Sum = "<< sumofNnum(N);

}