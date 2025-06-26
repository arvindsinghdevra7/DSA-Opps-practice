#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row=row+1){
    for(int col=0;col<num-row;col=col+1){
        cout<<col;
    }cout<<endl;
 }
return 0;
}

#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int r=0;r<num;r=r+1){
    for(int c=0;c<num;c=c+1){
        if(r==0||r==4){
            cout<<"*";
        }
        else if(c==0||c==4){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}