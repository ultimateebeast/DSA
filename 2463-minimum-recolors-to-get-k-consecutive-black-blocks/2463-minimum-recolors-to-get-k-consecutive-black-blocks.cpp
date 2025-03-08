class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int size = blocks.size();

        if(k > size) size=-k;
        int start = 0;
        int pointerK = k;

        int mini = INT_MAX;

        char target = 'W';

        while(pointerK <= size){
            int cnt = count(blocks.begin()+start,blocks.begin()+pointerK,target);

            mini = min(mini,cnt);
            start++;
            pointerK++;
        }

        return mini;
    }
};