#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter an number: ";
    cin>>num;
     int sum =0;
     int i =1;

     do{
            if(i%3==0){
                sum+=i;
            }
            i++;
     }while(i<=num);

     cout<<"sum = "<<sum<<endl;

    return 0;
}