#include<iostream>
using namespace std;

// prime number

// int primenumber(int num){
//     for (int i=2;i<num;i++){
//         if(num%i==0){
//             cout<<"not a prime";
//             return 0;
//         }
//     }
//     cout<<"prime";
//     return 0;
// }

// int main (){
//     primenumber(7);
// }


//function call by refrence

// void plusone(int &a){
//     a=a+1;
//     cout<<a<<endl;
// }

// int main(){
//     int num =7;
//     plusone(num);
//     cout<<num;
// }




// function call by value

// void plusone (int a){
//     a=a+1;
//     cout<<a<<endl;
// }
// int main()
// {
//     int num=7;
//     plusone (num);
// cout<<num;
// }

//function :- call by address

// void pluseone(int *a){
//     *a=*a+4;
//     cout<<*a<<endl;
// }
// int main(){
//     int num=7;
//     pluseone(&num);
//     cout<<num;
// }

//function :- default argument 

// int sum (int a=0,int b=0){
//     return a+b;

// }
// int main (){
//     int num1=7;
//     int num2=10;
//     cout<<sum(num1,num2);
// }




int main(){
    int c=30;
    cout<<&c<<endl;
    int *p = NULL;
    cout<<p<<endl;
    int b =10;
    int &a=b;
    cout<<a;
}