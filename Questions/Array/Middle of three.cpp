https://practice.geeksforgeeks.org/problems/middle-of-three2926/1#


//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        if((A-B)*(B-C)>0)
            return B;
        else if((A-C)*(C-B)>0)
            return C;
        else 
            return A;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends