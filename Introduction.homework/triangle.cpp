#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter three sides of triangle:"<<endl;
  cin >>a>>b>>c;
  if(a+b<=c || a+c<=b || b+c<=a){
    cout<<"Not a triangle"<<endl;
  }
  else{
    cout<<"triangle is valid";
    
  }
  return 0;}
  