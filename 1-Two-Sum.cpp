class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> nums2 = nums; 
        sort(nums2.begin(), nums2.end());     
        int a, b;
        for(int l = 0, r = n-1; l <= r; ){
            if(nums2[l] + nums2[r] < target){
                ++l;
            }else if(nums2[l] + nums2[r] > target){
                --r;
            }else{
                a = nums2[l];
                b = nums2[r];
                break;
            }
        }
        vector<int> ans(2);
        
        for(int i = 0; i < n; ++i){
            if(nums[i] == a){
                ans[0] = i;
                break;
            }
        }
        
        for(int i = n-1; i >= 0; --i){
            if(nums[i] == b){
                ans[1] = i;
                break;
            }
        }
        
        return ans;
    }
};
