#include<iostream>
using namespace std;
int main(){

    int arr[10]  = {-89,-34,-76,-94,-32,-24,-87,-13,-87,-67};
    int largest  = arr[0];

    for(int i=1;i<10;i++){

        if(arr[i]>largest){
            largest = arr[i];
        }

        // largest = max(arr[i],largest);


    }
    cout<<"largest value = "<<largest<<endl;

    for(int i=0;i<10;i++){

        if(arr[i] == largest){
            cout<<"index value = "<<i<<endl;
        }

    }


    int smallest = arr[0];

    for(int i=1;i<10;i++){

        // if(arr[i]<smallest){
        //     smallest = arr[i];
        // }

        smallest = min(arr[i],smallest);

    }

    cout<<"smallest value = "<<smallest<<endl;

    for(int i=0;i<10;i++){

        if(arr[i] == smallest){
            cout<<"index value = "<<i<<endl;
        }

    }



    return 0;
}