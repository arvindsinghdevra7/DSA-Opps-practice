// factorial
#include<iostream>
using namespace std;
int fact(int a){
     int factorial=1;
    for(int i=1;i<=a;i++){
        factorial=factorial*i;

    }
   return factorial;
}
int main(){
int a=10;
int ans=fact(a);
cout<<"factorial is "<<ans;
return 0;
}