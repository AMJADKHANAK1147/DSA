// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter the vale of n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }

//         cout<<endl;

//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter the vale of n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }

//         cout<<endl;

//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     char ch = 'A';
//     cout<<"Enter the vale of n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";
            
//         }

//         ch++;
//         cout<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=i;j>=1;j--){
            cout<<j<<":";
        }

        cout<<endl;
    }

    return 0;
}