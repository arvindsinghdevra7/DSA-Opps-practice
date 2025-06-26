#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>> number;
 for(int row=0;row<number;row=row+1){
    for(int col=0;col<number;col=col+1){
        cout<<"* ";
       
    } cout<<endl;
 }
return 0;
}