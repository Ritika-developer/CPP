#include<iostream>
using namespace std;
int main()

// check the array is  palandrom  

{
    int arr[]={1,1,2,1,1};
    int i=0;
    int j=4;

    while (i<j){
        if(arr[i]!=arr[j]){
            cout<<"not palindrom";
            return 0;
        }
i++;
j--;
    }
    cout<<"palindrom";
}

