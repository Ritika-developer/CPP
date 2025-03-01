# include <iostream>
using namespace std;
int main()
{
    int base,power,ans=1;
    cout<<"enter a number";
    cin>>base;
    cout<<"enter a power";
    cin>>power;
    for(int i=1 ; i<=power; i++){
        ans=base*ans;
    }
    cout<<ans;
}