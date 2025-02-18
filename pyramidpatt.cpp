#include<iostream>
using namespace std;
int main(){

    int N;
    cout<<"Enter the vale of N: ";
    cin>>N;

    for(int i=0;i<N;i++){

       for(int j=0;j<(N-i-1);j++){
        cout<<" ";
       }

            for(int k=0;k<=i;k++){
                cout<<k+1;
            }

                for(int l=0;l<i;l++){
                    cout<<l+1;
                }



                    cout<<endl;
    }

    return 0;
}