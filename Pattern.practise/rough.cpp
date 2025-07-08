#include<iostream>
using namespace std;
int main(){
//  int a=5;
//  int b=2;
//  cout<<(a^b)<<endl;;
//  cout<<~(a);

// int a=7;
// cout<<(a<<1)<<endl;

// int a=7;
// cout<<(a>>4)<<endl;

// int a=10;

// cout<<(++a)*(a++);
// for(int i=1;i<11;i++){
//     if(i==3)
  
//     break;
//       cout<<i;

// }


//  char ch ='A';
//  int a=ch+1;
// cout<<a;

int a=5;
int b=5;
int op;
cin>>op;
float ans=0;

switch(op)

{case 0:
   ans=a+b;
  
  case 1:
   ans=a-b;
  
  case 2:
   ans=a/b;
  
  case 3:
   ans=a*b;
  
default:
  cout<<"invalid";
  cout<<ans;
return 0;
}

return 0;
}