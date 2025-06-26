#include<iostream>
using namespace std;
int main(){
 int num=4;
 
 for(int row=0;row<num;row=row+1){
      int k=0;
    for(int col=0;col<((num*2)-1);col=col+1){
        if(col<num-row-1){
            cout<<" ";
        }
      
        else if(k<((2*row)+1)){
            if(k==0||k==2*row 
            ){ cout<<"*";}
            else{
                cout<<" ";
            }
           
          k=k+1;
        } 
        else{
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}