class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int>fre1;
        vector<int>res(10,0);

        for(char c : s){
            fre1[c]++;
        }

        res[0] = fre1['z'];
        res[2] = fre1['w'];
        res[4] = fre1['u'];
        res[6] = fre1['x'];
        res[8] = fre1['g'];

        res[1] = fre1['o'] - res[0] - res[2] - res[4];
        res[3] = fre1['h'] - res[8];
        res[5] = fre1['f'] - res[4];
        res[7] = fre1['s'] - res[6];
        res[9] = fre1['i'] - res[5] - res[6] - res[8];


        string val;

        for(int i=0;i<10;i++){
            val.append(res[i],'0'+i);
        }
        return val;
    }
};