class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int seqSz = sequence.size();
        int wrdSz = word.size();

        string smp = word;

        int cnt = 0;

        for (int i = 0; i < seqSz; i++) {
            if (seqSz >= wrdSz) {
                size_t pos = sequence.find(smp);

                if (pos != string::npos) {
                    cnt++;
                }

                smp += word;

            }

            else {
                break;
            }
        }
        return cnt;
    }
};