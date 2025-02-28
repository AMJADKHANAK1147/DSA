// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {1,2,3,4};
//     vector<int>ans(vec.size(),1);

//     for(int i=0;i<vec.size();i++){

//         for(int j=0;j<vec.size();j++){

//             if(i==j){
//                 continue;
//             }else{
//                 ans[i] = ans[i]*vec[j];
//             }

//         }

//     }

//     for(int val:ans){
//         cout<<val<<" ";
//     }


//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {1,2,3,4};
//     vector<int>ans(vec.size(),1);
//     vector<int>pre(vec.size(),1);
//     vector<int>pos(vec.size(),1);

//     for(int i=0;i<pre.size();i++){
//         if(i==0){
//             continue;
//         }else{
//             pre[i] = pre[i-1]*vec[i-1];
//         }
//     }
//     for(int j=pos.size()-1;j>=0;j--){
//         if(j==pos.size()-1){
//             continue;
//         }else{
//             pos[j] = pos[j+1]*vec[j+1];
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         ans[i]= pre[i]*pos[i];
//     }

//     for(int val:ans){
//         cout<<val<<" ";
//     }


//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {1,2,3,4};
    vector<int>ans(vec.size(),1);
  
    

   for(int i=1;i<vec.size();i++){
    ans[i]= ans[i-1]*vec[i-1];
   }

    int pos = 1;
        for(int j=vec.size()-2;j>=0;j--){
           pos = pos*vec[j+1];
           ans[j] = ans[j]*pos;
        }
   
   

    for(int val:ans){
        cout<<val<<" ";
    }


    return 0;
}