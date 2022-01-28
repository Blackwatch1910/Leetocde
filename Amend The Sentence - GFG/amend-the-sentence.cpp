// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        string temp="";
        bool first=false;
        for(int i=0;i<s.size();i++){
          if(s[i]>='a'&& s[i]<='z'){
              temp+=s[i];
          }else {
              if(i>0){
                  temp+=' ';
              }
              temp+=tolower(s[i]);
          }
        }
        return temp;
    }
};

// { Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}  // } Driver Code Ends