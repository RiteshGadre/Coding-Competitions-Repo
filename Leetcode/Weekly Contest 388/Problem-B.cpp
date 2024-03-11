class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long sum= 0;
        int c=0;
        for(int i=0; i<k; i++){
            if(happiness[i]-c >= 0)
                sum+= happiness[i]-c;
            c++;
        }
        return sum;
    }
};