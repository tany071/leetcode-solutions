class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> num2;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else if(nums[i]!=0){
                num2.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            num2.push_back(0);
        }
        nums=num2;
    }
};
