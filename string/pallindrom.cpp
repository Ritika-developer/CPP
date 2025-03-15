#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"enter your name";
    cin>>name;

    int i=0;
    int j=name.length()-1;

    while(i<j){
        if(name[i] != name[j]){
            cout<<"not a pallindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"pallindrom";
}