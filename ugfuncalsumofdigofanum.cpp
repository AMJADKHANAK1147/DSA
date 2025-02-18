#include<iostream>
using namespace std;

    int sumDig(int Num){

        int sum =0;

        while(Num>0){     // while(Num<=0){

            int digit =0;
            digit = Num%10;
            sum+=digit;
            Num = Num/10;
        }

        return sum;

    }

int main(){
    int Num;
    cout<<"Enter the value of Num: ";
    cin>>Num;

   
   cout<< sumDig(Num);

    return 0;
}