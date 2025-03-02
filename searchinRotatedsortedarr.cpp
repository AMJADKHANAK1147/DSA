#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {3,4,5,6,7,0,1,2};
    int target     = 0;

    int st    = 0;
    int end   = vec.size()-1;

    while(st<=end){

        int mid = st + (end-st)/2;

        if(vec[mid] == target){
            cout<<mid<<endl;
        } 

        if(vec[st]<vec[mid]){
            if(vec[st]<=target&&vec[mid]>=target){
                end = mid -1;
            }else{
                st = mid +1;
            }
        }else{
            if(vec[mid]<=target&&vec[end]>=target){
                st = mid+1;
            }else{
                end = mid;
            }
        }

    }

    return 0;
}