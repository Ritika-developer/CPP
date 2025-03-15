#include<iostream>
using namespace std;
int main()


//duplicate value

{
    int arr[]={1,2,4,2,3,1,4,2,};
    for(int i=0 ; i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0;i<8;i++){
        if (arr[i]!=-1){
            cout<<arr[i]<<"\t";
        }
    }
    return 0;
}


