#include<iostream>
using namespace std;
// void ka use
// void addnumber(int a,int b,int c){
//     int sum=a+b+c;
//     cout<<sum;

// }

// int ka use
int addnumber(int a,int b,int c){
    int sum=a+b+c;
    return sum;

}
int main(){
 int ans=addnumber(5,3,2);
cout<<ans;
return 0;
}