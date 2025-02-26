// #include<iostream>
// using namespace std;
// int s1,s2;
// int main(){

//     int arr[10]  = {-89,-34,-76,-94,-32,-24,-87,-13,-87,-67};
//     int largest  = arr[0];
//     int smallest = arr[0];

//     for(int i=1;i<10;i++){

//         if(arr[i]>largest){
//             largest = arr[i];
//         }

//         // largest = max(arr[i],largest);


//     }

//     for(int i=0;i<10;i++){

//         if(arr[i] == largest){
//            s1 =i;
//         }

//     }


  

//     for(int i=1;i<10;i++){

//         // if(arr[i]<smallest){
//         //     smallest = arr[i];
//         // }

//         smallest = min(arr[i],smallest);

//     }


//     for(int i=0;i<10;i++){

//         if(arr[i] == smallest){
//            s2 = i;
//         }

//     }

//     swap(arr[s1],arr[s2]);
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {

    int arr[10] = {-89, -34, -76, -94, -32, -24, -87, -13, -87, -67};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0], smallest = arr[0];
    int s1 = 0, s2 = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            s1 = i;
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
            s2 = i;
        }
    }

    swap(arr[s1], arr[s2]);

    cout << "Array after swapping largest and smallest elements:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
