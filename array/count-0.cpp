#include<iostream>
using namespace std ;
int main()


// count zero

{
    int arr[]={1,3,0,6,0,7,9,0};
    int count=0;

    for (int i=0; i<8; i++){

        if(arr[i]==0){
            count++;
        }
    }

    cout<<count;
}

