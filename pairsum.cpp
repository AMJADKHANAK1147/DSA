// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {2,7,11,15};
//     int target     = 13;

//     for(int i=0;i<vec.size();i++){

//         for(int j= i+1;j<vec.size();j++){

//             if(target == vec[i]+vec[j]){
//                 cout<<"Index_Value = "<<i<<" "<<j<<endl;
//             }

//         }

//     }

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

    vector<int>pairSum(vector<int>vec,int target){

        int i=0,j=vec.size() - 1;
        vector<int>ans;

        while(i<j){

            int sum = vec[i]+vec[j];

            if(sum>target){
                j--;
            }else if(sum<target){
                i++;
            }else{
                ans.push_back(i);
                ans.push_back(j);
                break;
            }

        }
        return ans;

    }

int main(){

    vector<int>vec = {2,7,11,15};
    int target     = 18;

   vector<int>Sum = pairSum(vec,target);

   cout<<Sum[0]<<endl;
   cout<<Sum[1]<<endl;


    return 0;
}
