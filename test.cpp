#include<iostream>
using namespace std;

int main()
// print 10 natural number using loop
// for loop
// {
// for(int i=1;i<=10;i++){
//     cout<<i<<endl;
// }
// }



//while loop

// {
//     int num=1;
//     while( num<=10){
//         cout<<num<<endl;
// num++;
//     }

// }


//do while loop

// {
//     int num=1;
//     do {
//         cout<<num<<endl;
//         num++;
//     }
    
//     while(num<=10);
// }




//print factorial using loop
//for loop

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     for(int i=1;i<num;i++){
//         if(num%i==0)
//             cout<<i<<endl;   
//     }
//



//print a single line table

// {
//     int num;
//     cout<<"enter your number";
//     cin>>num;

//     for(int i=1;i<=10;i++){
//         cout<<i*num<<endl;
//     }
// }

//print a multi line table

// {

// for(int i=1;i<=10;i++){
//     for(int j=1;j<=10;j++){
//         cout<<i*j<< "\t";
//     }
//     cout<<endl;
// }
// }







//prime number

// {
//     int num;
//     cout<<"enter your number";
//     cin>>num;
//     int count=0;

//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
//         if(count==2){
//             cout<<"prime";
//         }
//         else{cout<<"not a  prime";
//         }
//     }


// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;

//     if(num<=1){
//         cout<<"not a prime";
//         return 0;
//     }

//     for(int i=2;i*i<=num;i++){
//         if(num%i==0){
//             cout<<"not a prime";
//             return 0;
//         }
//     }
//     cout<<"prime";
// }

// //reverse a number using loop
// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;//123
//     int rev=0;


//     while(num>0){
//         int digit =num%10;
//         num=num/10;
//         rev=rev*10+digit;
//     }
//     cout<<rev;
// }









{
    int num;
    cout<<"enter";
    cin>>num;
    
    int fir=0;
    int sec=1;
    int nxt;

    cout<<fir<<" "<<sec<<" ";

    for(int i=3;i<=num;i++){
        nxt=fir+sec;
        fir=sec;
        sec=nxt;
    }
    cout<<nxt<<" ";
}





//fabonnaci series 

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;


//     int first =0;
//     int second =1;
//     int next ;

//     cout<<first<<endl <<second<<endl;

//     for(int i=3;i<=num;i++){
//         next=first +second;
//         first=second;
//         second=next;

//         cout<<next<<endl;
//     }
// }




// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;

//     int fir =0;
//     int sec=1;
//     int nxt;

//     for(int i =1;i<=num;i++){
//         if(i==1){
//             cout<<fir<<endl;
//             continue;
//         }

//         if(i==2){
//             cout<<sec<<endl;
//             continue;
//         }

//             nxt=fir+sec;
//             fir=sec;
//             sec=nxt;
//             cout<<nxt<<endl;

//     }
// }

// {
//     int num;
//     cout<<"enter: ";
//     cin>>num;
// int fir=0;
// int sec=1;
// int nxt;

// for(int i=0;i<num;i++){
//     if(i==0){
//         cout<<fir<<" ";
//         continue;
//     }
//     if(i==1){
//         cout<<sec<<" ";
//         continue;
//     }
// nxt=fir+sec;
// fir=sec;
// sec=nxt;
// cout<<nxt<<" ";
// }
// }


// digit count and sum

// {
//     int num , sum=0, count=0;
//     cout<<"enter a number";
//     cin>>num;

//     while(num>0){
//         int digit = num%10;
//         sum=sum+digit;
//         num=num/10;
//         count++;
//     }
//     cout<<sum<<endl;
//     cout<<count;
// }



//count 

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     int count=0;
//     while(num>0){
//         int digit = num%10;
//         num=num/10;
//         count++;
//     }
//     cout<<count;
// }



//sum 

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
// int  sum=0;
//     while(num>0){
//         int digit = num%10;
//         num=num/10;
//         sum=sum+digit;
//     }
//     cout<<sum<<endl;
// }



//reverse

// {
//     int num ;
//     cout<<"enter  number";
//     cin>>num;
//     int ans = num ;

//     int rev=0;

//     while(num>0){
//         int digit = num%10;
//         num = num /10;
//         rev = rev * 10 + digit ;
//     }
//     if(ans==rev){
//         cout<<"palindrom";
//     }
//     else{
//         cout<<"not  a palindrom";
//     }
// }





// {
//     int num;
//     cout <<"enter";
//     cin>>num;
//     int sum=0,ans;
//     ans=num;
//     while(num>0){
//         int digit = num%10;
//         num=num/10;
//         sum=sum+digit*digit*digit;
//     }
//     if(ans==sum){
//         cout<<"amstrong";
//     }
//     else{
//         cout<<"not  a amstrong";
//     }
// }




// {
// int power;
// cout<<"enter power";
// cin>>power;

// int base;
// cout<<"enter base";
// cin>>base;

// int ans=1;

// for(int i =1 ;i<=power;i++){
//     ans=ans*base;
// }
// cout<<ans;
// }



//lcm
// {

//  greatest number


// {
// int num;
// cout<<"enter  num ";
// cin>>num;
// int ans=0;
// while(num>0){
//     int digit=num%10;
//     if(digit>ans){
//         ans=digit;
//     }
//     num=num/10;

// }
// cout<<ans;
// }


// smallest num


// {
//     int num;
//     cout<<"enter  num ";
//     cin>>num;
//     int ans=9;
//     while(num>0){
//         int digit=num%10;
//         if(digit<ans){
//             ans=digit;
//         }
//         num=num/10;
    
//     }
//     cout<<ans;
//     }
    

// {
//     int a=5;
//     int n=10;
//     int d=5;

//     for(int i=0;i<n;i++){
//         cout<<(a+i*d)<<" ";
//     }
// }




// {
//     int num;
//     cout<<"enter number";
//     cin>>num;
//     int ans=0;

//     for(int i=1;i<=num;i++){
//          ans = ans+i;
         
//     }
//     cout<<ans;
// }




// {
//     int num;
//     cout<<"enter number";
//     cin>>num;
//     int ans=1;

//     for(int i=1;i<=num;i++){
//          ans = ans*i;
         
//     }
//     cout<<ans;
// }









                                        //ARRAY



// INPUT AND DISPLAY 

// {
//     int arr[10];
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// //FIND LARGEST NUMBER IN AN ARRAY

// {
//     int mx=0;
//     int arr[5];
//     for(int i=0 ;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int j=0;j<5;j++){
//         if(arr[j]>mx){
//             mx=arr[j];
//         }
//     }
//     cout<<"the largest number is :  "<<mx;
// }


//FIND SMALLEST NUMBER IN AN ARRAY

// {
//     int mx=9;
//     int arr[5];
//     for(int i=0 ;i<5;i++){
//         cin>>arr[i];
//     }

//     for(int j=0;j<5;j++){
//         if(arr[j]<mx){
//             mx=arr[j];
//         }
//     }
//     cout<<"the smallest number is :  "<<mx;
// }

//sum array
// {
//     int sum=0;
// int arr[5]={2,5,7,3,9};
// for(int i=0;i<5;i++){
//     sum=sum +arr[i];
// }
// cout<<sum;
// }



//asending order in array

// {
//     int arr[]={3,6,4,8,6};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[j]>arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
    
//     }
//      for(int i=0;i<5;i++){
//         cout <<arr[i]<<"\t";
//      }
// }




//desending array
// {
//     int arr[]={3,6,4,8,6};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
    
//     }
//      for(int j=0;j<5;j++){
//         cout <<arr[j]<<"\t";
//      }
// }



//duplicate arrray
// {
//     int arr[]={2,4,6,3,8,5,3,5,4,6};
//     for(int i=0;i<10;i++){
//         for(int j=i+1;j<10;j++){
//             if(arr[j]==arr[i]){
//                 arr[j]=-1;
//             }
//         }
//     }
//     for(int i=0;i<10;i++){
//         if(arr[i]!=-1){
//             cout<<arr[i]<<"\t";
//         }
//     }
//     return 0;
// }

//replace
// {
// int arr[]={4,6,7,2,4,2};
// for(int i=0;i<6;i++){
//     if(arr[i]==7 || arr[i]==2){
//         arr[i]=arr[i]+1;
//     }
//     cout<<arr[i]<<"\t";
// }
// }


//remove target
// {
//     int arr[]={4,6,7,2,4,2};
//     for(int i=0;i<6;i++){ 
//         if(arr[i]!=7){
//             cout<<arr[i]<<"\t";
//         }
//       }
// }


//plus 5 in an aray
// {
//     int arr[]={4,6,7,2,4,2};
//         for(int i=0;i<6;i++){ 
//             arr[i]=arr[i]+5;
//         }
//         for(int i=0;i<6;i++){ 
//             cout<<arr[i]<<"\t";
//         }

// }



//size of array
// {
//     int arr[]={2,5,7,8,4,5};
//     int s = sizeof(arr)/sizeof(arr[0]);
//     cout<<s<<endl;
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }
// }



// // one missing number
// {
//     int arr[]={3,5,7,9,11,13};
//     for(int i=0;i<6;i++){
//         if(arr[i+1] - arr[i]>1){
//             cout<<arr[i]+1<<endl;
//         }
//     }
// }





// // multi missing number
// {
//     int arr[]={3,7,11,15,18,20};
//     for(int i=0;i<6;i++){
//         if(arr[i+1] - arr[i]>1){
//             for(int j=arr[i]+1;j<arr[i+1];j++){
//                 cout<<j<<"\t";
//             }
//         }
//     }
// }




//shift zero in last

// {
//     int arr[]={2,5,8,0,4,0,0,7,0,2,0,0};
//     int s=sizeof(arr)/sizeof(arr[1]);
//     int j=0;
//     for(int i=0;i<s;i++){
//         if(arr[i]!=0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }

//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<"\t";
//     }

// }


//count zero

// {
//     int arr[]={2,5,8,0,4,0,0,7,0,2,0,0};
//         int s=sizeof(arr)/sizeof(arr[1]);
//         int count=0;
//         for(int i=0;i<s;i++){
//             if(arr[i]==0){
//                 count++;
//             }
//         }
//         cout<<count;
// }



//frequency 
// {
//     int arr[]={1,2,4,2,2,3,1,4,2,-3};
//     for(int i=0;i<10;i++){
//         if(arr[i]!=-1){
//             int count =1;
//             for(int j=i+1;j<10;j++){
//                 if(arr[i]==arr[j]){
//                     count++;
//                     arr[j]=-1;
//                 }
//             }
//             cout<<arr[i]<<" is "<<count<<endl;
//         }
//     }
// }





//pallindrom

// {
//     int arr[]={1,1,2,1,1};
//     int i=0;
//     int j=0;

//     while(i<j){
//         if(arr[i]!=arr[j]){
//             cout<<"not pallindrom";
//             return 0 ;
//         }
//         i++;
//         j--;
//     }
//     cout<<"palindrom";
// }



//target value =0

// {
//     int arr[]={1,4,2,1,5,3,1};
//     int target = 1;
//     for(int i=0;i<7;i++){
//         if(arr[i]==target){
//             arr[i]=0;
//         }
//     }
//     for(int i=0;i<7;i++){
//     cout<<arr[i]<<" ";
//     }
// }



//remove target value

// {
    
// {
//     int arr[]={1,4,2,1,5,3,1};
//     int target = 1;
//     for(int i=0;i<7;i++){
//         if(arr[i]==target){
//             arr[i]=0;
//         }
//     }
//     for(int i=0;i<7;i++){
//         if(arr[i]!=0){
//     cout<<arr[i]<<" ";
//     }
// }
// }
// }





// {
    
// {
//     int arr[]={1,4,2,1,5,3,1};
//     int target = 1;
//     for(int i=0;i<7;i++){
//         if(arr[i]!=target){
//             cout<<arr[i]<<" ";
//         }
// }
// }
// }


