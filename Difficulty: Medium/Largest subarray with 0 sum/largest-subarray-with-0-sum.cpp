//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int,int> st;
        int maxm = 0;
        int sum = 0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum == 0){
                maxm = i+1;
            }
            else{
                if(st.find(sum)!=st.end()){
                    maxm = max(maxm,i-st[sum]);
                }
                else{
                    st[sum] = i;
                }
            }
        }
        return maxm;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends