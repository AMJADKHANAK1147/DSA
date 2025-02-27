// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {1,2,2,2,2,1,1};

//     for(int i=0;i<vec.size();i++){
//             int count =0;
//         for(int j= 0;j<vec.size();j++){

//             if(vec[i]==vec[j]){
//                 count++;
//             }
//             }
//             if(count >vec.size()/2){
//                 cout<<vec[i];
//                 break;
//             }
//         }
    

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec = {2,1,3,1,2,1,4,1,5,1,1,1,1};

    int fre =0,ans =0;

    for(int i=0;i<vec.size();i++){

        if(fre ==0){
            ans =vec[i];
        }
        if(ans == vec[i]){
            fre++;
        }else{
            fre--;
        }

    }
    cout<<ans<<endl;

    return 0;
}