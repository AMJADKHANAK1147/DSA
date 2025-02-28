// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec = {1,8,6,2,5,4,8,3,7};
//     int Max_volume=0;

//     for(int i=0;i<vec.size()-1;i++){

//         for(int j=i+1;j<vec.size();j++){

//             int hight = min(vec[i],vec[j]);
//             int wirth = j-i;
//             int current_volume = hight*wirth;
//             Max_volume = max(Max_volume,current_volume);

//         }

//     }

//     cout<<"Max_volume = "<<Max_volume<<endl;

//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>vec = {1,8,6,2,5,4,8,3,7};
    int Max_volume=0;

   int st =0;
   int end=vec.size()-1;
   while(st<end){

    int hight = min(vec[st],vec[end]);
    int wirth = end - st;
    int current_volume = hight * wirth;
    Max_volume = max(Max_volume,current_volume);
    if(vec[st]<vec[end]){
        st++;
    }else{
        end--;
    }
    
   

   } 

    cout<<"Max_volume = "<<Max_volume<<endl;

    return 0;
}