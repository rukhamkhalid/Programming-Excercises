#include<iostream>
using namespace std;

int Reversed(int n){
    int Reverse=0;
    for(int i = n;i>0;i/=10){
        Reverse = Reverse*10 + i%10;
    }
    return Reverse;
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<Reversed(num);

    return 0;
}
