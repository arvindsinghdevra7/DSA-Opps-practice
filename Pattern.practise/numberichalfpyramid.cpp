#include<iostream>
using namespace std;
int main(){
 int num=6;
 for(int row=0;row<num;row=row+1){
    for(int col=1;col<row+1;col=col+1){
        cout<<col;
    }cout<<endl;
 }
return 0;
}