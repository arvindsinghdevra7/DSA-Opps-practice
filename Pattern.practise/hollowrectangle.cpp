#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row=row+1){
    for(int col=0;col<num;col=col+1){
        if(row==0|| row==4 ){
            cout<<"* ";
        }
        else if(col==0||col==4){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }cout<<endl;
 }
return 0;
}
