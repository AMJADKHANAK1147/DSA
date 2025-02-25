#include<iostream>
using namespace std;
int main(){

int arr[10] = {84,46,86,98,36,33,24,16,75,36};
int target  = 369;
bool isTrue = false;
 
  int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i=0;i<size;i++){

        if(arr[i] == target){
            cout<<"Index value = "<<i<<endl;
            isTrue = true;
        }
        }

        if(isTrue == false){
            cout<<"Invalid_indax";
        }

   
return 0;
}
