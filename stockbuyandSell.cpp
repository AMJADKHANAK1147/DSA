#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {7,1,5,3,6,4};

    int Max_profit =0;
    int buy_price = vec[0];
        for(int i=1;i<vec.size();i++){
            int current_profit = vec[i]-buy_price;
            if(current_profit<0){
                buy_price = vec[i];
            }else{
                Max_profit = max(Max_profit,current_profit);
            }
        }
        cout<<Max_profit<<endl;

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {7,1,5,3,6,4};

//     int Max_profit =0;
//     int buy_price = vec[0];
//         for(int i=1;i<vec.size();i++){
//             if(vec[i]>buy_price){
//                 Max_profit = max(Max_profit,vec[i]-buy_price);
//             }else{
//                 buy_price = min(buy_price,vec[i]);
//             }
//         }
//         cout<<Max_profit<<endl;

//     return 0;
// }