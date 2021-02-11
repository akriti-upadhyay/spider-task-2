#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int A[26]={0}, B[26]={0}, flag=0;
    for(int i=0; i<s1.length(); i++)
        A[s1[i]-'a']++;
    for(int i=0; i<s2.length(); i++)
        B[s2[i]-'a']++;
    for(int i=0; i<26; i++){
        if(A[i]>0 && B[i]>0 && abs(A[i]-B[i])>=0){
            flag=1;
            break;
        } 
    }
    if(flag)
        return "YES";
    else
        return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
