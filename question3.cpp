#include<iostream>
#include<map>
using namespace std;

int main(){
    map<char,bool> vowels;
    vowels['a'] = true;
    vowels['e'] = true;
    vowels['i'] = true;
    vowels['o'] = true;
    vowels['u'] = true;
    vowels['A'] = true;
    vowels['E'] = true;
    vowels['I'] = true;
    vowels['O'] = true;
    vowels['U'] = true;

    string s;
    cout<<"enter the string: ";
    cin>>s;
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(vowels[s[i]]){
            count++;
        }
    }
    cout<<"number of vowels in the string: "<<count;
    return 0;
}