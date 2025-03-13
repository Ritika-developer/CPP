# include <iostream>
using namespace std;
int main()
// {
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\t";
//     }
// }




// {
//     int arr[]={1,2,7,6,8,4};

//     for(int i=0 ;i<6;i++){

//         if(arr[i]==7){
//             arr[i]=3;
//         }
//         cout<<arr[i]<<"\t";
//     }
// }






// {
//     int arr[]={1,2,7,6,8,4};

//     for(int i=0 ;i<6;i++){

//         if(arr[i]==7){
            
//         cout<<arr[i]<<"\t";
//     }
// }
// }




// {
//     int arr[5];

//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<5;i++){
//         cout<<arr[i]<<"\t";
//     }
// }




// {
//     int arr[5];

//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<"\t";
//     }
// }


// {
// int arr[]={1,4,6,7,8,5};

// int s=sizeof(arr)/sizeof(arr[5]);

// for(int i=0;i<s;i++){
// cout<<arr[i]<<"\t";
// }
// }


// {
//     int arr[]={4,7,2,9,7,5,6,4};

//     int s=sizeof(arr)/sizeof(arr[5]);

//     for(int i=0;i<s;i++){
//         arr[i]=arr[i]+5;
//     }

//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }



// {
//     int arr[]={4,7,2,9,7,5,6,4};

//     int s=sizeof(arr)/sizeof(arr[5]);

//     for(int i=0;i<s;i++){
//         arr[i]=arr[i]-5;
//     }

//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }





{
    int arr[]={4,5,2,9,9,7,2,1};
    for(int i=0;i<8;i++){
        if(arr[i]!=-1){
            int count =1;
            for(int j=i+1;j<8;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            // cout<<arr[i]<<"is"<<count<<endl;
            if(count == 1){
                cout<<"unique number is " <<arr[i]<<endl;
            }
        }
        }
}

