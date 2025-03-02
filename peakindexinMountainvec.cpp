#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int> vec = {0,3,8,9,5,2};
    

//    for better optimization or correct ans 
//    mountain value != vec[0],vec[vec.size()-1]; always so 
    // int st  =0;
    // int end = vec.size()-1;

    int st  =1;
    int end = vec.size()-2;
    
    while(st<=end){

        int mid = st+(end-st)/2;

        if(vec[mid]>vec[mid-1]&&vec[mid]>vec[mid+1]){
            cout<<mid<<endl;
            return 0;
        }else if(vec[mid]>vec[mid-1]&&vec[mid]<vec[mid+1]){
            st = mid+1;
        }else{
            end = mid-1;
        }

    }
    cout<<"The given vector is not a mountain vector:";

    return 0;
}