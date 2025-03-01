// #include<iostream>
// using namespace std;

// void changeA(int *ptr ){
//     *ptr = 20;
    
// }

// int main(){

//     int a = 10;

//         changeA(&a);
//         cout<<a<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// void changeA(int &b ){
//     b =30;
    
// }

// int main(){

//     int a = 10;

//         changeA(a);
//         cout<<a<<endl;

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[3] = {4,7,4};
    // cout<<arr<<endl;
    // cout<<*arr<<endl;

       for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
       }
    
   
     

    return 0;
}