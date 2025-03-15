#include<iostream>
using namespace std;
int main()
//reverse
{
    string name;
    cout<<"enter your name";
    cin>>name;

    int i=0;
    int j=name.length()-1;

    while(i<j){
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        
        i++;
        j--;
        }
        cout<<name;
    }
   