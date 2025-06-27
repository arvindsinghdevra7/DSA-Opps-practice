#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    int totalcol=num-row;
    for(int col=0;col<num-row;col++){
        if(row==0){
            cout<<col+1;
        }
        else if(col==0){
            cout<<row+1;
        }
         // yh niche vala part smj ni aya
        else if(col==totalcol-1){
            cout<<num;
        }
        // yha tk
        else{
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}