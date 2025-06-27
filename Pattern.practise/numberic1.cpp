#include<iostream>
using namespace std;
int main(){
 int num=4;
 for(int row=0;row<num;row++){
    for(int col=0;col<((2*row)+1);col++){
        if(col%2==0){
            cout<<row+1;
        }
        else if(col%2==1){
            cout<<"*";
        }
      
    }cout<<endl;
 }
 for(int row=0;row<num;row++){
    for(int col=0;col<((-2*row)+1+num);col++){
        if(col%2==0){
            cout<<num-row-1;
          
        }
        else if(col%2==1){
            cout<<"*";
        }
    }cout<<endl;
 }
return 0;
}