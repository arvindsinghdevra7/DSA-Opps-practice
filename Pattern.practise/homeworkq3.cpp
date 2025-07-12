// numeric palindrone equilateral pyramid
#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    for(int col=0;col<num-row-1;col++){
        cout<<" ";
    }
    for(int col=0;col<row+1;col++){
        if(col==0){
            cout<<"1";
        }
        else if(col==1){
            cout<<"2";
        }
          else if(col==2){
            cout<<"3";
        }
          else if(col==3){
            cout<<"4";
        }
          else if(col==4){
            cout<<"5";
        }
     
    }
 for(int col=0;col<row;col++){
    if(col==0){
         cout<<row;
     }
     else if(col==1){
        cout<<row-1;
     }
        else if(col==2){
        cout<<row-2;
     }
        else if(col==3){
        cout<<row-3;
     }
       
    }
    
    cout<<endl;
 }
return 0;
}