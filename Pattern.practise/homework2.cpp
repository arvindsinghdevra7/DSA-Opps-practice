// numeric hyllow inverted half pyramid
#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    // int totalcol=num-row;
    for(int col=0;col<num-row;col++){
      
        if(col==0 ){
            cout<<row+1;
        }
        else if(row==0){
            cout<<col+1;
        }
        else if(col==num-row-1){
            cout<<"5";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}