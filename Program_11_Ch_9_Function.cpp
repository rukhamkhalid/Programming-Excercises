#include<iostream>
using namespace std;

int LCM(int Num1,int Num2){
    int n=2,LCM_Value=1;
    while(Num1>=1&&Num2>=1){
        if(Num1%n==0&&Num2%n==0){
            Num1/=n;
            Num2/=n;
            LCM_Value*=n;
        }
        else if(Num1%n==0){
            Num1/=n;
            LCM_Value*=n;
        }
        else if(Num2%n==0){
            Num2/=n;
            LCM_Value*=n;
        }
        else
            n++;
    }
    return -1*LCM_Value;
}

int main(){
    int num1, num2;
    cout<<"Enter two Numbers: ";
    cin>>num1>>num2;
    cout<<"LCM of Numbers is: "<<LCM(num1, num2);

    return 0;
}
