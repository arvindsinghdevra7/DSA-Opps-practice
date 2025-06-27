#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    int totalcol=num;
    for(int col=0;col<(3*row)+1;col++){
        if(col==0){
            cout<<"1";
        }
        else if(col==totalcol-1){
            cout<<row+1;
        }
        else {
            cout<<" ";
        }
    }cout<<endl;
 }
return 0;
}