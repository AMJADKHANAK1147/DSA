#include<iostream>
using namespace std;

int minValue(int A,int B){  // parameters

    if(A>B){
        cout<<"minimun number_:";
        return B;
    }else{
        cout<<"minimun number+:";
        return A;
    }

}

int main(){

    int A,B;
    cout<<"Enter the value of A: ";
    cin>>A;

    cout<<"Enter the value of B: ";
    cin>>B;

   cout<< minValue(A,B);  // argument

    return 0;
}