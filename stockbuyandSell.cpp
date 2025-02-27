#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {7,1,5,3,6,4};
    int bestBuy = vec[0];
    int max_profit = 0;
    
        for(int i=1;i<vec.size();i++){
            bestBuy = min(bestBuy,vec[i]);

            if(vec[i]>bestBuy){
                max_profit = max(max_profit,vec[i]-bestBuy);
            }
            //  bestBuy = min(bestBuy,vec[i]);

        }
  
        cout<<max_profit<<endl;

    return 0;
}