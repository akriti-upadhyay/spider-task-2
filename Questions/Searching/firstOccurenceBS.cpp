//find first occurence of an element using binary search

#include <iostream>
using namespace std;

int arr[9]={1,1,2,2,2,3,3,3,4};
int ele=7;
int n=9;

int BSearch(int begin, int end){
    while(begin<=end){
        int mid=(begin+end)/2;
        if(ele==arr[mid]){
            if(arr[mid-1]!=ele)
                return mid;
            else if(arr[mid-1]==ele){
                return BSearch(0,mid-1);
            }
            else if(arr[mid+1]==2){
                return BSearch(mid+1,n-1);
            }
        }
        else if(ele>arr[mid])
            begin=mid+1;
        else if(ele<arr[mid])
            end=mid-1;
    }
    return -1;
}

int main() {
    cout<<BSearch(0,8);
	return 0;
}