#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    int arr[4]={0}, ans=0, sum=0;
    for(int i=0; i<n; i++){
        if(islower(password[i])) arr[0]++;
        else if(isupper(password[i])) arr[1]++;
        else if('0'<=password[i] && password[i]<='9') arr[2]++;
        else arr[3]++;
    }
    for(int i=0; i<4; i++){
        if(!arr[i])
            ans+=1;
    }
    if(n>=6)
        return ans;
    else{
        if(ans+n>=6) return ans;
        else return 6-n;   
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
