#include<iostream>
using namespace std;
int main(){
 int num=6;
 for(int row=0;row<num;row++){

    for(int col=0;col<num-row-1;col++){
cout<<" ";
    }
     int coltotal=num-row;
    for(int col=0;col<coltotal;col++){
        if(col==0||col==coltotal-1){
            cout<<" * ";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;

    }
 
return 0;
}