#include<iostream>
using namespace std;

int reverseNum(int n);

int main(void){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    n = reverseNum(n);
    cout<<"the result is: "<<n;
    return 0;
}

int reverseNum(int n){
    int temp=0;
    int i=1;
    while(n!=0){
        temp*=10;
        temp+=n%10;
        n/=10;
        cout<<"time stamp: "<<i++<<"\n";
    }
    cout<<"total time taken: "<<--i<<"\n";
    return temp;
}