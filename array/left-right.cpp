#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
        int left = 2;
        int right = 3;
            int temp =arr[left];
            arr[left] = arr[right];
            arr[right]=temp;

            cout<<arr[right]<<endl;
            for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
            }
        }
    
