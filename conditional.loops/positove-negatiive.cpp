#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number:";
   cin >>n;
   if(n==0){
    cout <<"ZERO";
   }
   else if(n>0){
    cout <<"POSITIVE";
   }
   else if(0>n){
    cout <<"Negative";
   }
 
    return 0;
}
