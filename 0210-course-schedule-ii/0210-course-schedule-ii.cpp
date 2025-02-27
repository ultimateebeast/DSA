class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];

        for(auto val : prerequisites){
            adj[val[1]].push_back(val[0]);
        }

        vector<int> inDegree(numCourses, 0);

        for(int i=0;i<numCourses;i++){
            for(auto val : adj[i]){
                inDegree[val]++;
            }
        }

        queue<int>q;

        for(int i=0;i<numCourses;i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }

        vector<int>res;
        while(!q.empty()){
            int x = q.front();
            q.pop();

            res.push_back(x);
            for(int val : adj[x]){
                inDegree[val]--;
                if(inDegree[val] == 0){
                    q.push(val);
                }
            }
        }
        if(res.size() == numCourses) return res;

        return {};
    }
};