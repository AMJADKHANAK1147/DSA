#include<iostream>
#include<vector>
using namespace std;

    bool isValid(vector<int>vec,int painters,int mid){

        int painter =1;
        int maxHours =0;
        for(int i=0;i<vec.size();i++){

            if(vec[i]>mid){
                return false;
            }
            if(maxHours+vec[i]<=mid){
                maxHours +=vec[i];
            }else{
                painter++;
                maxHours = vec[i];
            }

        }
        if(painter>painters){
            return false;
        }else{
            return true;
        }

    }

int main(){

    vector<int>vec = {40,30,10,20};
    int boards   = 4;
    int painters = 2;

    int ans = -1;
    int min =0;
    int Max =0;
    for(int i=0;i<boards;i++){
        Max += vec[i];
        min = max(min,vec[i]);
    }

    while(min<=Max){

        int mid = min+(Max-min)/2;

        if(isValid(vec,painters,mid) == true){

            ans = mid;
            Max = mid-1;
        }else{
            min = mid+1;
        }

    }
    
    cout<<ans<<endl;


    return 0;
}