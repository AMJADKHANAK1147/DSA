// #include<iostream>
// using namespace std;
// int main(){

//     int n =5;
//     int arr[n]= {4,2,5,1,3};

//     for(int i=0;i<n-1;i++){

//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int n =5;
    int arr[n]= {4,2,5,1,3};

    for(int i=0;i<n-1;i++){

     int min_index = i;

     for(int j=i+1;j<n;j++){
        if(arr[min_index]>arr[j]){
            min_index = j;
        }
     }
     swap(arr[i],arr[min_index]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}