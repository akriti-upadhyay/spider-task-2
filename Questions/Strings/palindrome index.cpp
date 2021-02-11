#include <bits/stdc++.h>

using namespace std;

int checkP(string s, int i){
    string s1="", s2="";
    s1=s; s2=s;
    int f1=0, f2=0;
    s1.erase(i,1);
    s2.erase(s.length()-1-i,1);
    for(int j=0; j<s1.length()/2; j++){
        if(s1[j]!=s1[s1.length()-1-j]){
            f1=-1;
            break;
        }
        else
            continue;
    }
    for(int j=0; j<s2.length()/2; j++){
        if(s2[j]!=s2[s2.length()-1-j]){
            f2=-1;
            break;
        }
        else
            continue;
    }
    if(f1==-1 && f2==-1)
        return -1;
    else if(f1==-1 && f2==0)
        return s.length()-1-i;
    else //(f2==0 && f2==-1)
        return i;
}
// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    int ans=0;
    for(int i=0; i<s.length()/2; i++){
        if(s[i]!=s[s.length()-1-i]){
            ans=checkP(s,i);
            break;
        }
        else{
            ans=-1;
            continue;
        }
    }
    return ans;
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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
