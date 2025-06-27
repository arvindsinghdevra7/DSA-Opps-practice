#include<iostream>
using namespace std;
int main(){
 int num=5;
 for(int row=0;row<num;row++){
  char ch;
    for(int col=0;col<row+1;col++){
        int number=col+1;
        ch=number+'A'-1;
        cout<<ch;
    }
    // yh niche vala part smj ni aya
    for(char alpha=ch;alpha>'A';){
        alpha=alpha-1;
        cout<<alpha;
    }
    cout<<endl;
 }
return 0;
}