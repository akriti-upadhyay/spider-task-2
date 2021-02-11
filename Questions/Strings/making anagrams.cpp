#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int f1[26]={0}, f2[26]={0}, uncommon=0;
    int total=s1.length()+s2.length();
    for(int i=0; i<s1.length(); i++)
        f1[s1[i]-'a']++;
    for(int i=0; i<s2.length(); i++)
        f2[s2[i]-'a']++;
    for(int i=0; i<26; i++){
        uncommon+=abs(f1[i]-f2[i]);
    }
    return uncommon;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
