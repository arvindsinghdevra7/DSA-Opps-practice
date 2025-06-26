#include<iostream>
using namespace std;
int main(){
 int num=4;
 for(int row=0;row<num;row=row+1){
    for(int col=0;col<row;col=col+1){
        // if(row==0){
        //     cout<<"*";}

            // if(col<row){
                cout<<" ";

            }

           for(int col=0;col<num-row;col=col+1){
            cout<<"* ";
           
           }
         

        
   cout<<endl;
    }
 
return 0;
} 