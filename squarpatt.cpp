// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter the vale: ";
//     cin>>n;

//      int count =1;

//       while(count<=n){


//         int co=1;
//          while(co<=n){
//             cout<<co<<" ";
//             co++;
//          }

//         cout<<endl;
//         count++;

//       }


//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the vale: ";
    cin>>n;

     int count =1;
       int co = 1;

      while(count<=n){


        // int co=1;
        int cou =1;
         while(cou<=n){
            cout<<co<<" ";
            cou++;
            co++;
         }

        cout<<endl;
        count++;

      }


    return 0;
}