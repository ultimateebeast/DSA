class ProductOfNumbers {
    vector<int>st;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        st.push_back(num);
    }
    
    int getProduct(int k) {
        int a = st.size()-1;
        int val = 1;
        for(int i=a;i>a-k;i--){
            val*=st[i];
        }
        return val;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */