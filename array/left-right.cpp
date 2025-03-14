#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
        int left = 1;
        int right = 2;
            int temp =arr[left];
            arr[left] = arr[right];
            arr[right]=temp;

            cout<<arr[right];
        }
    
