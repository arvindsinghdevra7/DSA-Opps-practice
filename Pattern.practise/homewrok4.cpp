// solid half diamond
#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    for(int col=0;col<row+1;col++){
        cout<<"*";
    }cout<<endl;
 }
 int num2=4;
 for(int row=0;row<num2;row++){
    for(int col=0;col<num2-row;col++){
        cout<<"*";
    }cout<<endl;
 }


return 0;
}