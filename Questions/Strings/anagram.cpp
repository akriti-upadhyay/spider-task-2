#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int n=s.length();
    int ans=0;
    int left[26]={0}, right[26]={0};
    if(n%2!=0)
        return -1;
    else {
        for(int i=0; i<n/2; i++){
            left[s[i]-'a']++;
        }
        for(int i=n/2; i<n; i++){
            right[s[i]-'a']++;
        }
        
        for(int i=0; i<26; i++){
            if(left[i]-right[i]>0){
                ans+=left[i]-right[i];
            }
        }
        return ans;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
