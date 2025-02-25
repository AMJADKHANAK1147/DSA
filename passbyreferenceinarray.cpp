#include<iostream>
using namespace std;

void changarr(int arr[],int size){

    for(int i=0;i<size;i++){

        arr[i] = arr[i]*2;

    }
    

}

int main(){

    int arr[4] = {2,4,6,8};

    changarr(arr,4);
    
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}