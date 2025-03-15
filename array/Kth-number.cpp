#include<iostream>
using namespace std;
int main()
{
    int k=4;
    int arr[]={3,4,7,9,5,};
for(int i=0;i<k;i++){
    for(int j=i+1;j<5;j++){
if(arr[j]>arr[i]){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
    }
}
cout<<arr[k-1];
}





