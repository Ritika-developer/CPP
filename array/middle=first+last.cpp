#include<iostream>
using namespace std;
int main()
//sum of first and last number and substract with middle number then replace with middle number
{
   int arr[]={5,3,4,7,6};

   int a=arr[0]+arr[4];
   arr[2]=a-arr[2];

   for (int i = 0; i < 5; i++)
   {
    cout<<arr[i]<<"\t";
   }
    
}

