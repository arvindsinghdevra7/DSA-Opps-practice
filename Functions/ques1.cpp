// area of circle
#include<iostream>
using namespace std;
float areacircle(float pie,float radius){
    float area=pie*radius*radius;
    cout<<area;
}
int main(){
 float area=areacircle(3.14,2);
//  cout<<"area of circle"<<area;
return 0;
}



// #include<iostream>
// using namespace std;
// void area(float pie,int r){
//     float areaa=pie*r*r;
//     cout<<areaa;
// }
// int main(){
//  area(3.14159,2);
// return 0;
// }