class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int i=0;
        vector<int> arr1; arr1.push_back(nums[i++]);
        vector<int> arr2; arr2.push_back(nums[i++]);
        for(; i<nums.size(); i++){
            if(arr1.back()>arr2.back()) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};