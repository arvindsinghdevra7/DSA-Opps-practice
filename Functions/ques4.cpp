// prime or not
#include<iostream>
using namespace std;
bool check(int n){
    int i=2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int main(){
 
int n=6;
bool ans=check(n);
if(ans){
    cout<<"Prime";
}
else{
    cout<<"NOt prime";
}

return 0;
}