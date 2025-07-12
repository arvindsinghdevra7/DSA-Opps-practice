// fancy pattern 1
#include<iostream>
using namespace std;


int main(){
 int num=5;
 for(int row=0;row<num;row++){
    for(int col=0;col<(num*2)-row;col++){
        cout<<"*";
    }
  for(int col=0;col<(2*row)+1;col++){
        if(col==0){
            cout<<row+1;
        }
        else if(col==1){
            cout<<"*";
        }
           else if(col==2){
            cout<<row+1;
        }
           else if(col==3){
            cout<<"*";
        }
           else if(col==4){
            cout<<row+1;
        }
           else if(col==5){
            cout<<"*";
        }
           else if(col==6){
            cout<<row+1;
        }
           else if(col==7){
            cout<<"*";
        }
           else if(col==8){
            cout<<row+1;
        }
    }
  for(int col=0;col<(num*2)-row;col++){
        cout<<"*";
    }
    cout<<endl;
 }
return 0;
}