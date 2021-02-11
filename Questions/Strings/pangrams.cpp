#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    set<char> alpha;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++){
        alpha.insert(s[i]);
    }
    int count=alpha.size();
    if(count==27) return "pangram";
    else return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
