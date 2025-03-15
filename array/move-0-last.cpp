#include<iostream>
using namespace std;
int main()

//move zero in the end of the array

{
int arr[]={1,3,0,6,0,7,9,0};
int j=0;

for (int i=0 ;i<8;i++){

    if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
}
for (int i=0; i<8;i++){
    cout<<arr[i]<<"\t";
}
}





