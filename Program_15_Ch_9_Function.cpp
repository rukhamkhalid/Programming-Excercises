#include<iostream>
#include<cmath>
using namespace std;

int Distance(int x1,int x2,int y1,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main(){
    int x1,x2,y1,y2,distance;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<"Enter y2: ";
    cin>>y2;
    distance = Distance(x1,x2,y1,y2);
    cout<<"Distance between points is: "<<distance;

    return 0;
}
