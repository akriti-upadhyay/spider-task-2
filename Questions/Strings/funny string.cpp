#include <bits/stdc++.h>

using namespace std;


vector<int> diff(string str){
    int len=str.length(), diff=0;
    vector<int> d;
    for(int i=0; i<=len-2; i++){
        diff=abs((int)str[i]-(int)str[i+1]);
        d.push_back(diff);
        diff=0;
    }
    return d;
}
// Complete the funnyString function below.
string funnyString(string s) {
    vector<int> orig, rever;
    int count=0;
    orig=diff(s);
    reverse(s.begin(),s.end());
    rever=diff(s);
    for(int i=0; i<orig.size(); i++){
        if(orig[i]==rever[i])
            continue;
        else{
            count++;
            break;
        }
    }
    if(count==1) return "Not Funny";
    else return "Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
