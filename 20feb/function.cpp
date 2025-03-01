#include<iostream>
using namespace std;

// non-return type without parameter

// void show(){
//     cout<<"hello"<<endl;
// }
// int main(){
//     show ();
//     return 0 ;
// }




// non-return type with parameter

// void square(int a){
//     cout<<a*a;
// } 

// int main(){
//     int num ;
//     cout<<"enter a number";
//     cin>>num;
//     square(num);
//     return 0;
// }



// return type with parameter


// int square(int a){
//     return a*a;
// } 

// int main(){
//     int num ;
//     cout<<"enter a number";
//     cin>>num;
//     cout<< square(num);
//     return 0;
// }



// return type without parameter


// string hello()
// {
//     return "hello";
// }

// int main (){
//     cout <<hello();
//     return 0;
// }

//factorial

int factorial (int a ){
    int ans =1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}

int main (){
    cout <<factorial(5);
    return 0;
}




//function is used to  reusibility of code 
// type of function :- 1. return type , 2. non-return type 
// return type :- 1. with parameter , 2. without parameter
// non-return type :- 1. with parameter , 2. without parameter
/* syntax :- datatype functionname ()
{

}
*/

