#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    for(int i=0;i<(int)(s.length()-1);i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=-1;
        }
    }
    if(s=="")
        return "Empty String";
    else return s;
    
    /*ONLY APPLICABLE IF STRING IN LEXICAL ORDER
    int count=0;
    vector<int> value;
    int size=s.length();
    for(int i=0;i<26;i++){
        count=0;
        for(int j=0;j<size;j++){
            if((int)s[j]==(i+97)){
                count++;
            }
        }
        value.push_back(count);
    }
    string ans="";
    for(int i=0; i<value.size(); i++){
        if(value[i]%2==1){
            ans=ans+(char)(i+97);
        }
    }
    if(ans=="")
        return "Empty String";
    else return ans;*/
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
