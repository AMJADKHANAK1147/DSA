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
            cout<<"*";

            if(i != 0){

                for(int k=0;k<(2*i-1);k++){
                    cout<<" ";
                }
                    cout<<"*";

            }

        cout<<endl;
    }

    for(int i=0;i<(N-1);i++){

        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";

            if(i!=(N-2)){

                for(int k= 0;k<(2*(N-i)-5);k++){
                    cout<<" ";
                }
                  cout<<"*";

            }

        cout<<endl;
    }

    return 0;
}