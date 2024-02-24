#include <iostream>
using namespace std;
int main()
{
    for(int row=0;row<8;row++)
    {
        for(int col=0;col<5;col++)
        {
            //row 0 and row 7 are all star
            if(row==0 ||row==7){
                cout <<"*";
            }
            else if(col==0 ||col==4){
                cout <<"*";
            } 
            else {
                cout <<" ";
            }
        }cout<<endl;
    } 
   
    return 0;
}

 