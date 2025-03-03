#include<iostream>
using namespace std;
int main(){

    
    int arr[7] = {1,1,2,3,3,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n==1){
        cout<<arr[0];
        return 0;
    }
    int st = 0;
    int end= n-1;

    while(st<=end){

        int mid = st+(end-st)/2;

        if(mid ==0&&arr[mid]!=arr[mid+1]){
            cout<<arr[mid];
            return 0;
        }
        if(mid==n-1&&arr[mid]!=arr[mid-1]){
            cout<<arr[mid];
            return 0;
        }
        

        if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1]){
            cout<<arr[mid];
            return 0;
        }
       if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                st = mid+1;
            }else{
                end = mid-1;
            }
       }else{
        if(arr[mid]== arr[mid+1]){
            end = mid-1;
        }else{
            st = mid+1;
        }
       }

    }
    cout<<"Single element does not exist"<<endl;

    return 0;
}