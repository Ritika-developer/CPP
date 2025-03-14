#include<iostream>
using namespace std;
int main()

{
    int arr[]={-3,5,3,1,-8,0,-7,3};
    int count =0;
    int count1 =0;
    for(int i=0;i<8;i++){
        if(arr[i]>= 0){
            count ++;
        }

        else if(arr[i]<0){
            count1 ++;
        }
    }

    cout<<" number is positive "<<count<<endl;
    cout<<" number is negative "<<count1<<endl;
}