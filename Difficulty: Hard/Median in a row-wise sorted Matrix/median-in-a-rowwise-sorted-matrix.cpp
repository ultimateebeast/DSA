//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int>arr;
        
        for(auto &row:mat){
            for(int &val : row){
                arr.push_back(val);
            }
        }
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        return (n%2)?arr[n/2]:(arr[n/2] + arr[(n/2) - 1])/2.0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        int ans = -1;
        ans = obj.median(matrix);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends