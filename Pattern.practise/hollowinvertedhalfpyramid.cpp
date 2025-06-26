#include<iostream>
using namespace std;
int main(){
 int num=6;
 for(int row=0;row<num;row=row+1){
    for(int col=0;col<num;col=col+1){
        if(row==0 ||col==0){
            cout<<"*";
        }
        else if(col==num-row-1){
            cout<<"*";
        }
  
        else{
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}