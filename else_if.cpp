// #include<iostream>
// using namespace std;
// int main(){

//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;

//     if(marks>=90){
//         cout<<"your grade is 'A+'"<<endl;
//     }
//         else if(marks>=75){
//             cout<<"your grade is 'A'"<<endl;
//         }
//         else if(marks>=55){
//             cout<<"your grade is 'B'"<<endl;
//         }
//         else{
//             cout<<"better luck:"<<endl;
//             cout<<"try again"<<endl;
//         }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int marks;
//     cout<<"Enter your marks: ";
//     cin>>marks;

//     if(marks>=90){
//         cout<<"your grade is 'A+'"<<endl;
//     }
//         else if(marks>=75 && marks<90){
//             cout<<"your grade is 'A'"<<endl;
//         }
//         else if(marks>=55 && marks<75){
//             cout<<"your grade is 'B'"<<endl;
//         }
//         else{
//             cout<<"better luck:"<<endl;
//             cout<<"try again"<<endl;
//         }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the character: ";
    cin>>ch;

    if( ch>='A' && ch<='Z'){
        cout<<ch<<" is an upper case character:"<<endl;
    }
    else if( ch>='a' && ch<='z'){
        cout<<ch<<" is an lower case character: "<<endl;
    }
    else{
        cout<<"you Entered a wrong character:";
    }

    return 0;
}