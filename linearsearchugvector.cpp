// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//  vector<int>vec = {2,4,6,8,10,12};
//   int target    = 8;

//   int index =0;
//   for(int val: vec){

//     if(target == val){
//         cout<<index;
//     }
//     index++;


//   }



//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int>vec = {2,4,6,8,10,12};
  int target    = 8;

  for(int i=0;i<vec.size();i++){
    if(vec[i]==target){
        cout<<i<<endl;
    }
  }



    return 0;
}