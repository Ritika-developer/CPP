
#include<iostream>
using namespace std;
int main()

//find the largest element in an array

{

    int mx=0;
    int arr[]={1,3,4,7,9,5};

    for (int i = 0; i < 6; i++)
    {
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    cout<<mx;
}









// {
//     int arr[10];

//     for (int i = 0; i < 10; i++)
//     {
//         cin>>arr[i];
//     }

//     int mx=arr[0];

//     for(int j=1;j<10;j++){
//         if(arr[j]>mx){
//             mx=arr[j];
//         }
//     }
//     cout<<"the lrgest element is: "<<mx;
// }
