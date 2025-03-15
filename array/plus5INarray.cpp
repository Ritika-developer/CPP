#include<iostream>
using namespace std;
int main()
{
    
//in array add 5 

{
    int arr[]={1,5,7,3,9,3};

    int s=sizeof(arr)/sizeof(arr[5]);

    for(int i=0;i<s;i++){
        arr[i]=arr[i]+5;
    }

    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

}