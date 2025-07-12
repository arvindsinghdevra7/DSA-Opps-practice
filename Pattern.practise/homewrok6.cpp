// fancy pattern 2

#include<iostream>
using namespace std;
int main(){
 int num=4;
  int sum=1;
 for(int row=0;row<num;row++){
   
    for(int col=0;col<=row;col++){
      
            cout<<sum ;
            sum++;

            if(col<row){
                cout<<"*";
            }
        }cout<<endl;
     
    }
// sum=11 num=4
int start=sum-num;

for(int row=0;row<num;row++){
    int k=start;
    // int k1=4;
    // int k2=2;
    for(int col=0;col<num-row;col++){
cout <<k;
k++;
    if(col<num-row-1){
                cout<<"*";
            }
    }

    cout<<endl;
start=start-(num-row-1);
}

}
// if(row==0){
//  cout<< k ;
//         k++;
// }
// else if(row==1){
//     cout<<k1;
//     k1++;
// }
// else if(row==2){
//     cout<<k2;
//     k2++;
// }
// else if(row==3){
//     cout<<"1";
// }
       
//     }cout<<endl;
// }


//  }




















// #include<iostream>
// using namespace std;
// int main(){
//  int num=4;
//   int sum=1;
//  for(int row=0;row<num;row++){
   
//     for(int col=0;col<(2*row)+1;col++){
//         if(col%2==0){
//             cout<<sum;
//             sum++;
//         }
//         else{
//             cout<<"*";
//         }
//     }cout<<endl;
//  }
// sum=10;
//   for(int row=0;row<num;row++){
   
//     for(int col=0;col<(((2*num)-(2*row))-1);col++){
//         if(col%2==0){
//             cout<<sum;
//             --sum;
//         }
//         else{
//             cout<<"*";
//         }
//     }cout<<endl;
//  }


// return 0;
// }