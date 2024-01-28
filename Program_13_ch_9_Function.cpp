#include<iostream>
using namespace std;

float Smallest_Float(float Num1, float Num2, float Num3){
    if(Num1<Num2&&Num1<Num3) return Num1;
    else if(Num2<Num1&&Num2<Num3) return Num2;
    else return Num3;
}

int main(){
    float num1, num2, num3;
    cout<<"Enter Three Decimal Numbers: ";
    cin>>num1>>num2>>num3;
    cout<<"Smallest Float is: "<<Smallest_Float(num1, num2, num3);

    return 0;
}
