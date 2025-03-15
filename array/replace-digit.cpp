#include<iostream>
using namespace std;
int main()
{
    
//replace the digit in array 


    int arr[]={1,5,7,3,9,3};

    for(int i=0;i<6;i++){

        if(arr[i]==7){
            arr[i]=0;
        }
            cout<<arr[i]<<"\t";
    
    }
}
