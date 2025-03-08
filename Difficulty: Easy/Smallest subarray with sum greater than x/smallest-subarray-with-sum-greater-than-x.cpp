//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int start = 0;
        int pointer = 0;
        
        int sum = 0;
        
        int mini = INT_MAX;
        
        while( pointer < arr.size()){
            
            while(pointer < arr.size() && sum <= x){
                sum += arr[pointer++];
            }
        
            
            while(sum > x && start < pointer){
                mini = min(mini,pointer-start);
                sum -= arr[start++];
            }
        }
        
        return (mini == INT_MAX)?0:mini;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends