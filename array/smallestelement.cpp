#include<iostream>
using namespace std;
int main()


//find the smallest element in an array

{

    int mx=9;
    int arr[]={2,3,4,7,9,5};

    for (int i = 0; i < 6; i++)
    {
        if(arr[i]<mx){
            mx=arr[i];
        }
    }
    cout<<mx;
}
