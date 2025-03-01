# include <iostream>
using namespace std;
int main()
{
    int num,sum=0,ans;
    cout<<"enter a number";
    cin>>num;
    ans=num;

    while(num>0){
        int digit=num%10;
        sum=sum+digit*digit*digit;
        num=num/10;
    }
    if(ans==sum){
        cout<<"amstrong";
    }
    else{
        cout<<"not an amstrong";
    }
}