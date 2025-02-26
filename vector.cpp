#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int>vec = {1,4,2,4,3,2,1};

    int ans =0;

    for(int i : vec){

        ans ^=i;
    }
    cout<<ans<<endl;



    return 0;
}