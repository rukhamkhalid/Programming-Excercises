#include<iostream>
using namespace std;

void Triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    Triangle(num);

    return 0;
}
