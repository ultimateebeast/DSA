class KthLargest {
private: 
    int k;
    priority_queue<int,vector<int>,greater<int>>res;
public:
    KthLargest(int k, vector<int>& nums) :k(k){
        for(int a : nums){
            add(a);
        }
    }
    
    int add(int val) {
        if(res.size() < k){
            res.push(val);
        }

        else if(val > res.top()){
            res.pop();
            res.push(val);
        }

        return res.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */