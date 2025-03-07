class Solution {
private:   
 bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
 }
public:
    vector<int> closestPrimes(int left, int right) {
        if(right < 2) return {-1, -1};
        vector<int>allPrime;

        for(int i = left; i <= right; i++){
            if(isPrime(i)){
                allPrime.push_back(i);
            }
        }

        if(allPrime.size() < 2) return {-1,-1};

        int firstPrime = -1;
        int secPrime = -1;
        int miniDist = INT_MAX;

        for(int i = 0; i < allPrime.size() - 1; i++){

            int dist = allPrime[i + 1] - allPrime[i];

            if(dist < miniDist){
                miniDist = dist;
                firstPrime = allPrime[i];
                secPrime = allPrime[i + 1];
            }
        }
        return {firstPrime, secPrime};
    }
};