//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int getCount(int number){
	int count = 0;
	while(number != 0){
		number = number/2;
		count++;
	}
	return count;
}
    vector<int> changeBits(int N) {
	int count = getCount(N);
	int pNumber=1;
	for(int i=1;i<=count;i++)
		pNumber = pNumber*2;
	pNumber=pNumber-1;
	vector<int> ans;
	ans.emplace_back(pNumber-N);
	ans.emplace_back(pNumber);
	return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends