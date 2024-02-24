#include <iostream>
using namespace std;
int main()
{
    int n=8;
    
    
    for( int i=0;i<n;i=i+1)
    {

       
        for (int j=0;j<i+1;j=j+1)
        {
            cout << j+1<< " " ;
        }cout <<endl;
    }
      for( int i=0;i<n;i=i+1)
    {

       
        for (int j=0;j<n-i;j=j+1)
        {
            cout << j+1<< " " ;
        }cout <<endl;
    }
 
    return 0;
}