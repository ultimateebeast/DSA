class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>temp;

        for(const string&val : tokens){
            if(val == "+"){
                int a = temp.top();temp.pop();
                int b = temp.top();temp.pop();
                temp.push(b + a);
            }
            else if(val == "-"){
                int a = temp.top();temp.pop();
                int b = temp.top();temp.pop();
                temp.push(b - a);
            }
            else if(val == "*"){
                int a = temp.top();temp.pop();
                int b = temp.top();temp.pop();
                temp.push(b * a);
            }
            else if(val == "/"){
                int a = temp.top();temp.pop();
                int b = temp.top();temp.pop();
                temp.push(b / a);
            }
            else{
                temp.push(stoi(val));
            }
        }
        return temp.top();
    }
};