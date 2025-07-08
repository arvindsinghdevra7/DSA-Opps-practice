#include<iostream>
using namespace std;
void sumnum(int num){
    int sum=0;
    for(int i=2;i<=num;i+2){
        sum=sum+i;
      
    }
    cout<<sum;
}
int main(){
 sumnum(10);
return 0;
}