// #include<iostream>
// using namespace std;

//     void decimaltoBinary(int Number){

//         int Binary = 0;
//         int pow = 1;

//         while(Number>0){

//             int remander = Number%2;
//             Number       = Number/2;
//             Binary      += remander*pow;
//             pow         *= 10;


//         }

//         cout<<" Binary Number = "<<Binary<<endl;


//     }

// int main(){

//     int Number;
//     cout<<"Enter the value of Number: ";
//     cin>>Number;

//         decimaltoBinary(Number);

//     return 0;

// }


#include <iostream>
using namespace std;

void decimalToBinary(int number) {
    int binary = 0;
    int placeValue = 1;

    // Using a for loop instead of while
    for (; number > 0; number /= 2) {
        int remainder = number % 2;
        binary += remainder * placeValue;
        placeValue *= 10;
    }

    cout << "Binary Number = " << binary << endl;
}

int main() {
    int number;
    cout << "Enter the value of Number: ";
    cin >> number;

    decimalToBinary(number);

    return 0;
}
