#include<iostream>
using namespace std;
int main()

{
int arr[]={1,2,3,4,5,6};
for(int i=0;i<5;i++){
if(arr[i+1]<arr[i]){
    cout<<"not assending";
return 0;
}
}
cout<<"assending";
}





