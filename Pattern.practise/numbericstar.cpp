#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    for(int col=0;col<(2*num)-row-2;col++){
        cout<<"*";
    }
    for(int col=0;col<(2*row)+1;col++){
        if(col==0){
            cout<<row+1;
        }
            if(col==1){
            cout<<"*";
        }
            if(col==2){
            cout<<row+1;
        }
            if(col==3){
            cout<<"*";
        }
            if(col==4){
            cout<<row+1;
        }
            if(col==5){
            cout<<"*";
        }
            if(col==6){
            cout<<row+1;
        }
            if(col==7){
            cout<<"*";
        }
            if(col==8){
            cout<<row+1;
        }
        
    }
      for(int col=0;col<(2*num)-row-2;col++){
        cout<<"*";
    }
    cout<<endl;
 }
return 0;
}