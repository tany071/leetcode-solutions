class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int> counter;
        for(int i=0;i<n;i++){
            if (++counter[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }
        return 0;
    }
};
