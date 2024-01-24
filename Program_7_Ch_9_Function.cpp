#include<iostream>
#include<cmath>
using namespace std;

void Power_of_Number(int n, int p){
    cout<<pow(n, p);
}

int main(){
    int num, power;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the Power: ";
    cin>>power;
    Power_of_Number(num, power);
    return 0;
}
