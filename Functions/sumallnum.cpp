#include<iostream>
using namespace std;
void sumnum(int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum=sum+i;
      
    }
    cout<<sum;
}
int main(){
 sumnum(5);
return 0;
}