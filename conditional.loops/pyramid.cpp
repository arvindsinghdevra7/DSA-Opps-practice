#include <iostream>
using namespace std;
int main()
{
    int n =6;
    
    for( int i=0;i<n;i=i+1)
    {

        cout<<endl;
        for (int j=0;j<n-i;j=j+1)
        {
            cout << "*" ;
        }
    }
 
    return 0;
}