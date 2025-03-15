#include<iostream>
using namespace std;
int main()

//sum of arry

{
    int sum=0;
    int arr[]={1,3,4,7,6};

    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}