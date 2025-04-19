#include<iostream>
using namespace std;
int main(){

    int n =5;
    int arr[n] = {5,3,2,1,4};

    for(int i=0;i<=n-1;i++){
        bool isswap = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(isswap == false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}