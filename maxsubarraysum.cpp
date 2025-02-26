#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {1,2,3,4,5};
    int Max_sum = vec[0];
    for(int start=0;start<vec.size();start++){
        int current_sum =0;
        for(int end=start;end<vec.size();end++){

           current_sum += vec[end];
           Max_sum = max(Max_sum,current_sum);
           
        }

      

    }
    cout<<"Max_sum = "<<Max_sum<<endl;


    return 0;
}


