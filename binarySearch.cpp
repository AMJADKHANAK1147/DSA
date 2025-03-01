#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {-1,0,3,4,5,9,12};
    int target = 12;

    int st  =0;
    int end =vec.size()-1;

        while(st<=end){

            // int mid = (st+end)/2;
            // for better optimization 
            int mid = st+ (end-st)/2;            
            if(target<vec[mid]){
                end = mid -1;
            }else if(target>vec[mid]){
                st = mid+1;
            }else{
                cout<<mid<<endl;
                return 0;
            }

        }
        cout<<"Target does not found in this vector: "<<endl;



    return 0;
}