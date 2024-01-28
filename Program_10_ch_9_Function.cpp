#include<iostream>
using namespace std;

void Is_Prime(int n){
    int c=0;
    for(int i=2;i<n;i++){
        if(n%i==0) c++;
    }
    if(c==0) cout<<"Prime Number.";
    else cout<<"Not Prime Number.";
}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    Is_Prime(num);

    return 0;
}
