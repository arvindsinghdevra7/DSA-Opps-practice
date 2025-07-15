// priem1 to N

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
for(int i=2;i<=n;i++){
bool ans=check(i);
if(ans){
    cout<<i<<" ";
}


}




return 0;
}