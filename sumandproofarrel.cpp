#include<iostream>
using namespace std;
int main(){

int arr[9] = {2,4,6,8,10,12,14,16,18};

    int sum     = 0;
   long long int product = 1;
    
    for(int i=0;i<9;i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<product<<endl;

    return 0;
}