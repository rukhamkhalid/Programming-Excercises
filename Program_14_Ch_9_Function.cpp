#include<iostream>
using namespace std;

void Digit_Counter(int n){
        if(n == 0) cout<<n<<" is Zero."<<endl;
        else if(n % 2 == 0) cout<<n<<" is Even."<<endl;
        else cout<<n<<" is Odd."<<endl;
}

int main(){
    int nums[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the Number: ";
        cin>>nums[i];
    }
    
    for(int i=0;i<5;i++)
        Digit_Counter(nums[i]);

    return 0;
}
