#include <iostream>
using namespace std;
int main()

//right (c<=r)
// {
// for(int r=1;r<=5;r++){
//     for(int c=1;c<=5;c++){
//         if(c<=r){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }



//enverted left (c>=r)
// {
//     for(int r=1;r<=5;r++){
//         for(int c=1;c<=5;c++){
//             if(c>=r){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     }



//left
// {
//     for(int r=1;r<=5;r++){
//         for(int c=1;c<=5;c++){
//             if(c>=6-r){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     }



// //enverted right
// {
// for(int r=1;r<=5;r++){
//     for(int c=1;c<=5;c++){
//         if(c<=6-r){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }





{
for(int r=1;r<=5;r++){
    for(int c=1;c<=9;c++){
        if(c>=6-r && c<=4+r){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}