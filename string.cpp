#include<iostream>
using namespace std;
int main()
//valid paranthses

// {
//     string s;
//     cout<<"enter :  ";
//     cin>>s;
//     int par=0;
//     int sq=0;
//     int cur=0;

//     for(int i=0;i<s.length();i++){
//         if(s[i] == '{'){
//             cur++;
//         }

//         else if(s[i] == '['){
//             sq++;
//         }

//          else if(s[i] == '('){
//             par++;
//         }

//          else if(s[i] == '}'){
//             cur--;
//             if(cur==-1){
//                 cout<<"invalid";
//                 return 0;
//             }
//         }

//          else if(s[i] == ']'){
//             sq--;
//              if(sq==-1){
//                 cout<<"invalid";
//                 return 0;
//             }
//         } 
        
//         else if(s[i] == ')'){
//             par--;
//              if(par==-1){
//                 cout<<"invalid";
//                 return 0;
//             }
//         }
//     }
//     if(sq==0 && cur==0 && par==0){
//         cout<<"valid";
//     }

//     else{
//         cout<<"invalid";
//     }
// }



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