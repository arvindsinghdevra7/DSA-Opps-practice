#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row=row+1){
    for(int col=0;col<row+1;col=col+1){
        cout<<"* ";
    }cout<<endl;
 }
return 0;
}