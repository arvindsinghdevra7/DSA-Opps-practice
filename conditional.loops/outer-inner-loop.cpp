#include <iostream>
using namespace std;
int main()
{
    for (int i=0;i<=12;i=i+1)
    {

        cout << " outer loop"<<i <<endl <<endl;
        for (int j=0;j<=3;j++){
            cout<<"inner loop"<<j <<endl;
        }
    } 
    
    return 0;
      
}
