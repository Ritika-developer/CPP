#include<iostream>
using namespace std;
int main()

// {
//     int arr[]={1,5,7,3,9,3};
//     int s=sizeof(arr)/sizeof(arr[5]);
//     cout<<s<<endl;

//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }


{
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}