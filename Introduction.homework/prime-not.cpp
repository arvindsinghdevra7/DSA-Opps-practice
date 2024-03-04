#include <iostream>
using namespace std;
int main(){
    int n=5;
   

    if (n==1)
    {
        cout<<n <<"prime number:"  <<endl;
        return 0;
          }

          for (int i = 2; i < n; i++)
          {
        if (n%i==0){
            cout <<n<<"is not prime"<<endl;
        }

       
        
          }
     
          return 0;
          
    
}