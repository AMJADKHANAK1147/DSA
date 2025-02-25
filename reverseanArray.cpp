#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){

    for(int i=0,j=size-1;i<j;i++,j--){
        
            // swap(arr[i],arr[j]);

            int temp = arr[i];
            arr[i]   = arr[j];
            arr[j]   = temp;

    }

}

int main(){

int arr[6] = {2,4,6,8,10,12};
int size   = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}