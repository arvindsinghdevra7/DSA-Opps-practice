// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=n;j++)
//         {
//             cout <<"*";
//         }cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
//  using namespace std;
//  int main(){
//         int n=6;
//         for(int i=0;i<=6;i++){
//             for(int j=0;j<=n;j++)
//             {
//                 if(i==0 ||i==6){
//                     cout<<"*";
//                 }
//                 else if(j==0 || j==6){
//                     cout <<"*";
//                 }
//                 else {
//                     cout <<" ";
//                 }
//             }cout<<endl;
//         }


//     return 0;
//      }

// #include<iostream>
//  using namespace std;
//  int main(){
//         int n=4;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++)
//             {
//                 if(i==0 || j==0 || j==(n-i-1) ) {
//                     cout<<"*";
//                 }else {
//                     cout <<" ";
//                 }
                
//             }cout<<endl;
//         }


//     return 0;
//      }

#include<iostream>
 using namespace std;
 int main(){
        int n=6;
       
        for(int i=0;i<n;i++){
            for(int j=0;j<(2*n)-1;j++)
            { int  k=0;
                if(j<n-i-1) {
                    cout<<" ";

                }else if (k<2*i+1 ) {
                    cout <<"*";
                    k++;
                }else {
                    cout<<" ";
                }
                
            }cout<<endl;
        }


    return 0;
     }

