class Solution {
private:
    bool check(int start, int m, vector<int>& color,
               vector<vector<int>>& graph) {
        queue<int> q;
        color[start] = 0;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int val : graph[node]) {
                if (color[val] == -1) {
                    color[val] = !color[node];
                    q.push(val);
                }

                else if (color[val] == color[node]) {
                    return false;
                }
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int m = graph.size();

        vector<int> color(m, -1);

        for (int i = 0; i < m; i++) {
            if (color[i] == -1) {
                if (!check(i, m, color, graph)) {
                    return false;
                }
            }
        }
        return true;
    }
};