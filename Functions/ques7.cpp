// km to miles
#include<iostream>
using namespace std;
float  distance(float  km){ 

float     value=0.671371;

float  mile=km*value;
return mile;}

int main(){
 
 float    km=67;
 
 float  miles= distance(km);
 cout<<miles;
  
return 0;
}