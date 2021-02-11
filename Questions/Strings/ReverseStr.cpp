string reverseWord(string str){
    /*
    APPROACH 1:
    
    string ans="";
    for(int i=str.length()-1 ; i>=0 ; i--)
        ans+=str[i];
    return ans;
    */
    
    /*APPROACH 2: Swapping*/
    int temp;
    int n=str.length();
    for(int i=0;i<n/2;i++){
        temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    return str;
  }
