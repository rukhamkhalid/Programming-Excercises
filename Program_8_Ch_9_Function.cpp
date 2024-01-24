#include<iostream>
using namespace std;

void Equation(int w, int x, int y, int z){
    if(w*w+x*x+y*y==z*z)    cout<<"Equation is Satisfied.";
    else cout<<"Equation isn't Satisfied.";
}

int main(){
    int a,b,c,d;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    cout<<"Enter value of d: ";
    cin>>d;
    Equation(a,b,c,d);
}
