#include<iostream>
using namespace std;
int main ()

{
    int n;
    int sum =0;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        int sq=i*i;
        sum = sum + sq;
    }
    cout<<sum<<" ";
}






