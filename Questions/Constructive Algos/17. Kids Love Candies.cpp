#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n, k;
	while(t--){
	    cin>>n>>k;
	    int candy[n];
	    for(int i=0;i<n;i++)
	        cin>>candy[i];
	    int count=0;
    	for(int i=0; i<n; i++){
    	    while(candy[i]>=k){
	            candy[i]-=k;
	            if(candy[i]>=0)
	                count++;
    	    }
    	}
    cout<<count<<endl;
	}
	return 0;
}
  

//---------------------------------------------------------------

//BETTER

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n, k, count=0;;
	while(t--){
	    count=0;
	    cin>>n>>k;
	    int candy[n];
	    for(int i=0;i<n;i++){
	        cin>>candy[i];
	        count+=candy[i]/k;
	    }
    cout<<count<<endl;
    }
	return 0;
}
