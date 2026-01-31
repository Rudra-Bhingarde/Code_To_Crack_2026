#include<iostream>
using namespace std;

bool isprime(int num);

int main(void){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    bool prime=isprime(num);
    if(prime)
        cout<<"the given number is prime.";
    else
        cout<<"the given number is not prime.";
    return 0;
}

bool isprime(int num){
    if(num<2){
        return false;
    }
    if(num==2){
        return true;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

//complexity O(n^(1/2)) root n.

// num = 20
// 1 x 20
// 2 x 10
// 4 x 5
// 5 x 4
// 10 x 2
// 20 x 1

