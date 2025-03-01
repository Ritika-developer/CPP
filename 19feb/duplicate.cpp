#include<iostream>
using namespace std;
int main()
//duplicate value

// {
//     int arr[]={1,2,4,2,3,1,4,2,};
//     for(int i=0 ; i<8;i++){
//         for(int j=i+1;j<8;j++){
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<8;i++){
//         if (arr[i]!=-1){
//             cout<<arr[i]<<"\t";
//         }
//     }
//     return 0;
// }


//frequency count of each element in an array


// {
//     int arr[]={1,2,4,2,3,1,4,2};
//     for(int i=0;i<8;i++){
//         if(arr[i]!=-1){
//             int count=1;
//             for(int j=i+1;j<8;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                     arr[j]=-1;
//                 }
//             }
//             cout<<arr[i]<<" is "<<count<<endl;
//         }
//     }
// }

//find the unique element in an array
//jo repeat nahi ho rahe h 

// {
//     int arr[]={6,2,4,2,3,1,2,2};
//     for (int i=0;i<8;i++){
//         bool check=false;
//         for (int j=i+1;j<8;j++){
//             if (arr[i]==arr[j]){
//                 check=true;
//                 arr[j]=-1;
//             }
//         }
//         if(check==false && arr[i]!=-1){
//             cout<<arr[i]<<endl;
//         }
//     }
// }


// check the array is  palandrom  

// {
//     int arr[]={1,1,2,1,1};
//     int i=0;
//     int j=4;

//     while (i<j){
//         if(arr[i]!=arr[j]){
//             cout<<"not palindrom";
//             return 0;
//         }
// i++;
// j--;
//     }
//     cout<<"palindrom";
// }


//remove the target value

// {
//     int arr[]={1,2,4,53,4,2,3,3,1,1};{
//         int value=3;
//         for(int i=0;i<10;i++){
//             if(arr[i]!=value){
//                 cout<<arr[i]<<"\t";
//             }
//         }
//     }
// }


// put zero in target value
{
    int arr[]={1,2,4,53,4,2,3,3,1,1};{
        int value=1;
        for(int i=0;i<10;i++){
            if(arr[i]==value){
                arr[i]=0;
            }
        }
        for(int i=0;i<10;i++){
            cout<<arr[i]<<"\t";
        }
    }
}