#include<iostream>
using namespace std;
int main()
{
int arr1[]={1,2,3,4};
int arr2[]={1,2,5,4};
for(int i=0;i<4;i++){
    if(arr1[i]!=arr2[i]){
        cout<<"not aqual";
        return 0;
    }
   else if(arr1[i]==arr2[i]){
        cout<<"equal";
    return 0;
}

}
}