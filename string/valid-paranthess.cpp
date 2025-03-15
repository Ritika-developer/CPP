#include<iostream>
using namespace std;
int main()
//valid paranthses

{
    string s;
    cout<<"enter :  ";
    cin>>s;
    int par=0;
    int sq=0;
    int cur=0;

    for(int i=0;i<s.length();i++){
        if(s[i] == '{'){
            cur++;
        }

        else if(s[i] == '['){
            sq++;
        }

         else if(s[i] == '('){
            par++;
        }

         else if(s[i] == '}'){
            cur--;
            if(cur==-1){
                cout<<"invalid";
                return 0;
            }
        }

         else if(s[i] == ']'){
            sq--;
             if(sq==-1){
                cout<<"invalid";
                return 0;
            }
        } 
        
        else if(s[i] == ')'){
            par--;
             if(par==-1){
                cout<<"invalid";
                return 0;
            }
        }
    }
    if(sq==0 && cur==0 && par==0){
        cout<<"valid";
    }

    else{
        cout<<"invalid";
    }
}

