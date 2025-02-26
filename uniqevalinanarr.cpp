#include<iostream>
using namespace std;
int main(){

    int arr[10] = {1,2,3,4,5,6,4,3,2,1};
  

    for(int i=0;i<10;i++){

        bool isTrue = false;

        for(int j=0;j<10;j++){
            if (i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                isTrue = true;
                break;
            }
        }
        if(isTrue == false){
            cout<<arr[i]<<" ";
        }
    }

return 0;
}