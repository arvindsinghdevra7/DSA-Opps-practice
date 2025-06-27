#include<iostream>
using namespace std;
int main(){
 int num=8;
 int n=num/2;
 for(int row=0;row<n;row++){ 
    int totalcol=(2*row)+1;
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }
     for(int col=0;col<((2*row)+1);col++){
  if(col==0 || col==totalcol-1){
     cout<<"*";
  }else {
    cout<<" ";
  }
    }cout<<endl;
 }
 for(int row=0;row<n;row++){
    int totalCol=(2*n-(2*row)-1);
    for(int col=0;col<row;col++){
        cout<<" ";
    }
    for(int col=0;col<(2*n-(2*row)-1);col++){
if(col==0 || col==totalCol-1){
    cout<<"*";
}
else{
    cout<<" ";
}
        
    }cout<<endl;
 }
return 0;
}