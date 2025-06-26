#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row=row+1){
    int k=0;
    for(int col=0;col<((num*2)-1);col=col+1){
        if(col<num-row-1){
            cout<<" ";
        }
        else if(k<row+1){{
            cout<<"* ";

        }  k++;}
    }cout<<endl;
 }
return 0;
}