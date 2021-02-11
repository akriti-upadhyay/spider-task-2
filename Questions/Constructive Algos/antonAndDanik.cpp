#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, anton=0, danik=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A')
            anton++;
        else 
            danik++;
    }
    if(danik>anton) 
        cout<<"Danik";
    else if(danik<anton)
        cout<<"Anton";
    else
        cout<<"Friendship";
}
