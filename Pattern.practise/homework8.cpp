// fluid trianglr
#include<iostream>
using namespace std;
int main(){
 
    int num=7;
    int sum=1;
    for(int row=0;row<num;row++){
        for(int col=0;col<row+1;col++){
            cout<<sum <<" ";
            sum++;
        }cout<<endl;
    }
return 0;
}