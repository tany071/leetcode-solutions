class Solution {
public:
    int robBefore(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;

        for (int i =0;i<n;i++){
            int take = nums[i];
            if(i>1) take += prev2;

            int notTake = 0 + prev;

            int curi = max(take,notTake);
            prev2 = prev;
            prev = curi;
        }
        return prev;   
    }

    int rob(vector<int> &nums){
        vector<int> temp1 , temp2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=nums.size()-1) temp2.push_back(nums[i]);
        }

        return max(robBefore(temp1),robBefore(temp2));
    }
};
