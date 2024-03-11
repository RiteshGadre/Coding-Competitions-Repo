class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ans= accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end());
        int count= 0;
        
        for(int i= capacity.size()-1 ; i>=0; i--){
            ans-= capacity[i];
            count++;
            if(ans<=0) break;
            
        }
        return count;
        
    }
};