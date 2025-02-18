// #include<iostream>
// using namespace std;
// int main(){

//     int N;
//     cout<<"Enter the value of N: ";
//     cin>>N;

//     for(int i=0;i<N;i++){

//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }

//          for(int k=1;k<=(N-i);k++){
//             cout<<i+1;
//          }


//         cout<<endl;
//     }


//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    char ch ='A';
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;

    for(int i=0;i<N;i++){

        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int k=0;k<=(N-i-1);k++){
            cout<<ch;
         
        }

         ch++;
        cout<<endl;
    }

    return 0;
}