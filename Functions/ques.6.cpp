// create no. using digit
#include<iostream>
using namespace std;
int numberofdigit(int number){
int num=0;
for(int i=0;i<number;i++){
    cout<<"Enter Digit"<<endl;
    int digit;
    cin>>digit;
    num=num*10+digit;
    cout<<num;
}
return num;
}
int main(){
 int number;
 cin>>number;
 int num = numberofdigit(number);
return 0;
}