// fancy pattern 3
#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
    int cond= row<= num/2 ? 2*row : 0;
    for(int col=0;col<cond;col++){
        cout<<"*";
    }cout<<endl;
 }
return 0;
}