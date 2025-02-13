class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>count;
        map<char,int>count1;

        for(char &val : s){
            count[val]++;
        }

        for(char &val : t){
            count1[val]++;
        }

        int c = 0;
        for(auto val : count){
            if(count1.find(val.first)!=count1.end()){
                if(count[val.first] == count1[val.first]){
                    c+=count[val.first];
                }
                else{
                    c+=min(count[val.first],count1[val.first]);
                }
            }
        }

        return s.size()-c;
    }
};