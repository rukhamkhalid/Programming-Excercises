#include<iostream>
using namespace std;

void Multiple(int n, int m){
    if(n%m==0) cout<<"Number is Multiple.";
    else cout<<"Number is not Multiple.";
}

int main(){
    int num, mul;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the Multiple: ";
    cin>>mul;
    Multiple(num, mul);
    return 0;
}
