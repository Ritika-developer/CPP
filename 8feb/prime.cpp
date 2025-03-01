#include<iostream>
using namespace std;
int main()

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;

//     int count=0;
//     for(int i=1;i<=num;i++){
//         if (num%i==0){
//             count++;
//         }
//     }

//     if(count==2){
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not a prime";
//     }
// }


{
    int num;
    cout<<"enter a number";
    cin>>num;

    if (num<=1){
        cout<<"not a prime number";
        return 0;
    }


    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }

    cout<<"prime number";
}