#include <iostream>
using namespace std;

int BSearch(int arr[], int n, int ele){
    int begin=0;
    int end=n-1;
    while(begin<=end){
        int mid=(begin+end)/2;
        if(ele==arr[mid])
            return mid;
        else if(ele>arr[mid])
            begin=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main() {
	int n, count=0;
	cin>>n;
	int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int ele;
    cin>>ele;
    cout<<BSearch(arr, n, ele);
    return 0;
}
