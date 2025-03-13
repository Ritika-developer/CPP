#include<iostream>
using namespace std;
int main()



// revers arr

{
    int arr[]={1,1,2,3,1};
    int i=0;
    // int j=(sizeof (arr)/sizeof (arr[0]) )-1;
    int j=4;
while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    i++;
    j--;
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
}
}
