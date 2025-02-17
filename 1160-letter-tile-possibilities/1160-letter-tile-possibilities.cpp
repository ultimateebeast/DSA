class Solution {
public:
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        vector<bool>res(tiles.size(),false);
        return check(tiles,res);
    }
private:
    int check(string &tiles,vector<bool>&res){
        int count = 0;
        for(int i=0;i<tiles.size();i++){
            if(res[i] || (i>0 && tiles[i] == tiles[i-1] && !res[i-1])){
                continue;
            }
            res[i] = true;
            count+= 1+check(tiles,res);
            res[i] = false;
        }
        return count;
    }
};