#include <iostream>
using namespace std;
int main() 
{
    int start,end;
    cout<<"enter the starting no;";
    cin>>start;
    cout<<"enter the ending no;";
    cin>>end;
    for(int i=start; i<=end; i++){
      bool check=true;
      if(i<=1){
        cout<<i<<"is not prime"<<endl;
        check=false;
      }
      for(int j=2;j<i;j++){
        if(i%j==0){
            cout<<i<<"is not prime"<<endl;
            check=false;
            break;
        }
      }
        if(check==true){
            cout<<i<<"is prime"<<endl;
        }
    }
}