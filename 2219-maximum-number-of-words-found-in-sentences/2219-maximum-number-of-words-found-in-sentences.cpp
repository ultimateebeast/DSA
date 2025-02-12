class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        // string word;
        // int count = 0;
        // int n = sentences.size();
        // int maxm = 0;
        // for(int i=0;i<n;i++){
        //     string s = sentences[i];
        //     istringstream ss(s);
        //     while(ss>>word){
        //         count++;
        //     }

        //     maxm = max(maxm,count);
        //     count = 0;
        // }

        // return maxm;


        int maxm = 0;

        for(string val : sentences){
            int count = 1;
            for(char val1 : val){
                if(val1 == ' '){
                    count++;
                }
            }
            maxm = max(maxm,count);
            count = 1;
        }
        return maxm;
    }
};