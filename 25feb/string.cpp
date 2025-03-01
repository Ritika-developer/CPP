#include<iostream>
using namespace std;
int main()
//string :- sequence of character
// {
// string a="ritika";
// cout<<a[0];
// cout<<a[1];
// cout<<a[2];
// cout<<a[3];
// cout<<a[4];
// cout<<a[5]<<endl;
// cout<<a<<endl;
// cout<<a.length()<<endl;
// cout<<a.at(0);
// }

//predefine function of string

// 1:- length () => a.length()
// 2:- a[0]
// 3:- append => a="hello"
//             b = "ritika"
// a.append(b)
// 4:- compare => a.compare(b)
//                 a==b;
// 5:- find => a.find(a)  b="new";
//             a.find(b)

// {
//     string a="ritika";
//     string b="saloni";

//     b.append(a);
//     cout<<b<<endl;
//     cout<<a.find('a')<<endl;
//     cout<<b<<endl;

// }



// {
//     string name;
//     cout<<"enter your name";
//     cin>>name;

//     int i=0;
//     int j=name.length()-1;

//     while(i<j){
//         if(name[i] != name[j]){
//             cout<<"not a pallindrom";
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     cout<<"pallindrom";
// }



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
   



