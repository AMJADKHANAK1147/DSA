#include<iostream>
#include<vector>
using namespace std;

 bool isValid(vector<int> vec,int books,int student,int mid){

    int students =1;
    int pages    =0;
    
    for(int i=0;i<books;i++){
        if(vec[i]>mid){
            return false;
        }
        if(pages+vec[i]<=mid){
            pages +=vec[i];
        }else{
            students++;
            pages = vec[i];
        }
    }
    if(students>student){
        return false;
    }else{
        true;
    }

 }

int main(){

    vector<int>vec = {2,1,3,4};
    int books      = 4;
    int student    = 2; 
    if(books<student){
        return -1;
    }

    int sum = 0;
    int st  = 0;
    int ans = -1;
    
    for(int i=0;i<books;i++){
        sum += vec[i];
    }

    while(st<=sum){
        int mid = st+(sum-st)/2;

        if(isValid(vec,books,student,mid)==true){
            ans = mid;
            sum = mid-1;
        }else{
           st = mid+1;
        }

    }

    cout<<ans<<endl;

    return 0;
}