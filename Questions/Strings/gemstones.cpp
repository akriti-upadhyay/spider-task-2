#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[26]={0};
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        for(int j=0; j<s.length(); j++){
            if(arr[s[j]-'a']==i)
                arr[s[j]-'a']++;
        }
    }
    int count=0;
    for(int i=0; i<26; i++){
        if(arr[i]==n)
            count++;
    }
    cout<<count;
    return 0;
}

