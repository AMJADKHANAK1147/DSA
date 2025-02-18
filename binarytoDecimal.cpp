#include<iostream>
using namespace std;

    void binarytoDecimal(int binaryNumber){

        int Decimal    = 0;
        int placeValue = 1;

        for(;binaryNumber>0;binaryNumber/=10){

            int remander = binaryNumber%10;
            Decimal     += remander*placeValue;
            placeValue  *= 2; 

        }

        cout<<"Decimal = "<<Decimal<<endl;

    }

int main(){

    int binaryNumber;
    cout<<"Enter a binaryNumber: ";
    cin>>binaryNumber;

    binarytoDecimal(binaryNumber);

    return 0;
}