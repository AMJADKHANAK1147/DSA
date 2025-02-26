#include<iostream>
using namespace std;
int main(){

    int arr1[10] = {1,3,5,7,9,11,13,17,19,21};
    int arr2[10] = {2,4,3,5,9,7,98,214,21,19};

    for(int i=0;i<10;i++){

        for(int j=0;j<10;j++){

            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }

        }

    }

    return 0;
}