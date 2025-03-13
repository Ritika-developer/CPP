#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,7,5,6};
for(int i=0;i<6;i++){
int check = arr[i];

for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[j]<arr[i]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

        for(int j=0;j<6;j++){
if(arr[j]==check){
    cout<<"assending order";
    return 0;
}
else{
    cout<<"not assending order";
    return 0;
}
        }
}
}
}












// int check = arr[];
// for(int i=0;i<6;i++){
//     for(int j=i+1;j<6;j++){
//         if(arr[j]>arr[i]){
//             int temp =arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
    
//     }
//     for(int i=0;i<6;i++){
//         int check = arr[i];
// if(arr[i]==check){
//     cout<<"assending order";
//     return 0;
// }
// else{
//     cout<<"decending order";
// }
// }

// }