#include<iostream>
using namespace std;
int main()

// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     int first=0;
//     int second=1;
//     int nxt;
//     cout<<first<<second;

//      for(int i=3; i<=num; i++){
//          nxt=first+second;
//          first=second;
//          second=nxt;
//          cout<<nxt;
//  }
// }



 {
     int num;
     cout<<"enter a number";
     cin>>num;
     int first=0;
    int second=1;
     int next;

for(int i=1;i<=num;i++){

if(i==1){
    cout<<first;
    continue;
}

if(i==2){
    cout<<second;
    continue;
}

next=first+second;
first=second;
second=next;
cout<<next;


}

}