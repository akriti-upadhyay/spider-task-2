#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int oddCount=0, evenCount=0;
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        arr[(int)s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(arr[i]%2!=0)
            oddCount++;
    }
    if(oddCount==1 || oddCount==0)
        return "YES";
    else 
        return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
