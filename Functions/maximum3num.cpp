#include<iostream>
using namespace std;
void maxnumber(int a,int b,int c){
    if(a>b){
        cout<<a;
    }
    else if (a>c){
        cout<<a;
    }
      else if (c>b){
        cout<<c;
    }
      else if (c>a){
        cout<<c;
    }  else if (a<b){
        cout<<b;
    }  else if (c<b){
        cout<<b;
    }
}
int main(){
 maxnumber(21,3,5);
return 0;
}