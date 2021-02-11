#include <iostream>
using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int ele;
    cin>>ele;
    for(int i=0; i<n; i++){
        if(ele==arr[i]){
            cout<<i;
            count++;
            break;
        }
    }
    if(count==0)
        cout<<-1;
	return 0;
}
