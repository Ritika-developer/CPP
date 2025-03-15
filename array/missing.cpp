#include<iostream>
using namespace std;
int main()

//missing number


{
    int arr[]={5,6,11,20};

    for(int i=0;i<4;i++){

        if(arr[i+1]-arr[i]>1){

            for(int j=arr[i]+1;j<arr[i+1];j++){
                cout<<j<<"\t";
            }
        }
    }
}
