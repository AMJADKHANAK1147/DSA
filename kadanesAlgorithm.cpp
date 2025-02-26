#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {-5,-3,-6,-1,-9,-10,-88};

    int Max_sum     = vec[0];
    int current_sum = 0;

    for(int i=0;i<vec.size();i++){

        current_sum += vec[i];
        // Max_sum      = max(Max_sum,current_sum);
        if(current_sum>Max_sum){
            Max_sum = current_sum;
        }

        if( current_sum <0){
            current_sum =0;
        }


    }

            cout<<"Max_sum :"<<Max_sum<<endl;

    return 0;
}