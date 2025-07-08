#include<iostream>
using namespace std;
void number(int num){
    if(num%2==0){
        cout<<"even";
    }
    else {
        cout<<"odd";
    }
}
int main(){
 number(55);
return 0;
}