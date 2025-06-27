#include<iostream>
using namespace std;
int main(){
//  number
int num=6;
for(int row=0;row<num;row++){
    int totalCol=num-row;
    for(int col=0;col<num-row;col++){
        if(col==0 || row==0 ||col==totalCol-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
}
return 0;
}