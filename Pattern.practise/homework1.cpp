// numeric hyllow inverted  pyramid
#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=1;row<=num;row++){
    for(int col=1;col<=row;col++){
        if(col==1 || col==row || row==num)
cout<<col;
else{
    cout<<" ";
}
    }cout<<endl;
 }
return 0;
}