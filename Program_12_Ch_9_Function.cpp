#include<iostream>
using namespace std;

void Upper_Lines(int W){
    cout<<" ";
    for(int i=1;i<=W*2;i++)
        cout<<"_";
    cout<<endl;
}

void Vertical_Lines(int H, int W){
    for(int i=1;i<=(H-1)*2;i++){
        cout<<"|";
        for(int j=1;j<=W*2;j++)   cout<<" ";
        cout<<"|"<<endl;
    }
}

void Lower_Lines(int W){
    cout<<"|";
        for(int j=1;j<=W*2;j++)   cout<<"_";
        cout<<"|"<<endl;
}

void Rectangle(int H,int W){
    Upper_Lines(W);
    Vertical_Lines(H,W);
    Lower_Lines(W);
}

int main(){
    int height, width;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter width: ";
    cin>>width;
    Rectangle(height, width);

    return 0;
}
