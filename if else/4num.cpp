#include<iostream>
using namespace std;
int main()

{
int a;
cout<<"enter a no";
cin>>a;

if(a==1){
    cout<<"enter 2 3 4 ";
    cin>>a;
    
    if(a==2){
        cout<<"enter 3 4 ";
        cin>>a;
        if(a==3){
            cout<<"enter 4";
            cin>>a;
            if(a==4){
                cout<<"reach";
            }
            else{
                cout<<"invalid";
            }
        }
        else if(a==4){
            cout<<"reach";
        }
        else{
            cout<<"invalid";
        }
    }


    else if(a==3){
        cout<<"enter 4";
        cin>>a;
        if(a==4){
            cout<<"reach";
        }
        else{
            cout<<"invalid";
        }
    }


    else if(a==4){
        cout<<"reach";
    }
    else{
        cout<<"invalid";
    }
}
else{
    cout<<"invalid";
}
}