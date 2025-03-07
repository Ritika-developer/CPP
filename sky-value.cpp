#include<iostream>
using namespace std;
int main()
// {
// for (int i=0;i<=127;i++){
//     cout<<"value "<< i <<" is "<<char(i)<<endl;
// }
// cout<<endl;
// }


{
    string s="SAloNi";

    int size=s.length();

    for(int i=0;i<size;i++){

        int a=int(s[i]);
        if(a>=97 && a<=123){
            s[i]=int(s[i])-32;
        }

        else if(a>=65 && a<=91){
            s[i]=int(s[i])+32;
        }
    }
    cout<<s;
}