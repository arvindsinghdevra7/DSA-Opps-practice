#include<iostream>
using namespace std;
int main(){
 int num=4;
 for(int row=1;row<=4;row++){
    for(int col=1;col<=row;col++){
        cout<<"*";
    }
    for(int col=1;col<=((num*2)-(2*row));col++){
        cout<<" ";
    }

       for(int col=1;col<=row;col++){
        cout<<"*";
    }
    cout<<endl;
 }
for(int row=1;row<=num;row++){
    for(int col=1;col<=num+1-row;col++){
        cout<<"*";
    }
    for(int col=1;col<=2*row;col++){
        cout<<" ";
    }
     for(int col=1;col<=num+1-row;col++){
        cout<<"*";
    }
    
    cout<<endl;
}

return 0;
}