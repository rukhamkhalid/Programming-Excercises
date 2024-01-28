#include<iostream>
#include<cmath>
using namespace std;

float Float_Power(float num,int power){
    return pow(num, power);
}

int main(){
    int pow;
    float num, result;
    cout<<"Enter Float: ";
    cin>>num;
    cout<<"Enter Integer: ";
    cin>>pow;
    result = Float_Power(num, pow);
    cout<<"Result is: "<<result;

    return 0;
}
