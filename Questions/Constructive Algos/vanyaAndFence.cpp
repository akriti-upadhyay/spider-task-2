#include <iostream>
#include <vector>
using namespace std;

int main() {
	/*
	int n, h, i=0, max=0;
	cin>>n>>h;
	vector<int> friends(n);
	while(n--){
	    cin>>friends[i++];
	}
	for(int j=0;j<friends.size();j++){
	    if(friends[j]>h){
	        max+=2;
	    }
	    else if(friends[j]<=h){
	        max+=1;
	    }
	}
	cout<<max;
	return 0;*/
	
	//better approach
	
	int ele, h, n, max=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		cin>>ele;
		if(ele>h)
			max++;
		max++;
	}
	cout<<max;
}

