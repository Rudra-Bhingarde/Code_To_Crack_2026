#include <bits/stdc++.h>
using namespace std;

string reverseNum(string n);

int main(void){
    string n;
    cout<<"enter the number: ";
    cin>>n;
    n = reverseNum(n);
    cout<<"the result is: "<<n;
    return 0;
}

string reverseNum(string n){
    string temp="";
    for(int i=0;i<n.size();i++){
        temp+=n[n.size()-1-i];
    }
    return temp;
}