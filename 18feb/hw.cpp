#include<iostream>
using namespace std;
int main()



//HW  arr[]={1,3,5,2,3};
// target--6
// output:-1,5--3,3.


{
    int arr[]={1,3,5,2,3};
    int sum=6;

    for(int i=0 ; i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
            }
        }
    }
}




