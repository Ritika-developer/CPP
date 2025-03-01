#include <iostream>
using namespace std;
int main()
// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;

//     int first=0;
//     int second=1;
//     int nxt;

//     cout<<first<<","<<second<<",";

//     for(int i=3;i<=num;i++){
//         nxt=first+second;
//         first=second;
//         second=nxt;
//          cout<<nxt<<",";
//     }
// }

// {
//      int num;
//      cout<<"enter a number";
//      cin>>num;

//    int first=0;
//      int second=1;
//      int next;

//      for(int i=1;i<=num;i++){
//         if(i==1){
//             cout<<first;
//             continue;
//         }

//         if(i==2){
//             cout<<second;
//             continue;
//         }
            
//     next=first+second;
//     first=second;
//     second=next;
//     cout<<next;
//      }
   
// }

// {
//     int base,power,ans=1;
//     cout<<"base";
//     cin>>base;
//     cout<<"power";
//     cin>>power;

//     for(int i=1;i<=power;i++){
//     ans=base*ans;
//     }
//     cout<<ans;
// }


// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;


//      int count=0;
//     for(int i=1;i<=num;i++){
//         if (num%i==0){
//             count++;
//         }
//     }

//        if (count==2){
//         cout<<"prime num";
//        }
//     else{
//         cout<<"not a prime";
//     }
// }

{
    int num;
    cout<<"enter a number";
    cin>>num;

    if(num<=1){
        cout<<"not  a prime";
        return 0;
    }

    for(int i=2;i*i<=num;i++){
        if (num%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
        cout<<"prime  number";
}