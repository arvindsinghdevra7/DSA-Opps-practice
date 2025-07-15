// even or not even
#include<iostream>
using namespace std;
bool checkEven(int n){
    if(n%2==0){
        return true;  

    }
    else{
        return false;
    }
}
int main(){
 
    int n;
    cin>>n;
    bool isEven= checkEven(n);

    if(isEven){
        cout<<n<<"is Even no.";
    }
    else{
        cout<<n<<"is Odd no.";
    }
return 0;
}