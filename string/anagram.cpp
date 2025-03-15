#include<iostream>
using namespace std;
int main()


//Anagram
{
    string  s1,s2;
    cout<<"Enter a first name: ";
    cin>>s1;
    cout<<"Enter a second name: ";
    cin>>s2;
    
    
    if(s1.length() != s2.length())
    {
        cout<<"abe anpadh galat h padh le thoda sa";
        return 0 ;
    }
    
    for(int i=0;i<s1.length();i++)
    {
        bool check = true;
        for(int j=0;j<s1.length();j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]='#';
                check=false;
                break;
            }
        }
    
    if(check==true)
    {
        cout<<"abe anpadh galat h padh le thoda sa";
        return 0;
    }
    }
    cout<<"SAHI H BRO LAGTA H APUN HI BHAGWAN H";
    
    }