#include<iostream>
using namespace std;
int main(){
    
    int N;
    cout<<"Enter the vale of N: ";
    cin>>N;
    
    for(int i=0;i<N;i++){

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
            if(i!=(N-1)){
                for(int k=0;k<2*(N-i-1);k++){
                    cout<<" ";
                }
            }
                for(int l=0;l<=i;l++){
                    cout<<"*";
                }

        cout<<endl;
    }

    for(int i=0;i<N;i++){

        for(int j=0;j<(N-i);j++){
            cout<<"*";
        }
            if(i!=0){

                for(int k=0;k<(2*i);k++){
                    cout<<" ";
                }

            }

                for(int l=0;l<(N-i);l++){
                    cout<<"*";
                }

        cout<<endl;
    }


    return 0;
}