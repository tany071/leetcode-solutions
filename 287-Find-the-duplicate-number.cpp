class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int pointer1=0,pointer2=0;
       do{
           pointer1=nums[pointer1];
           pointer2=nums[nums[pointer2]];
       }while(pointer1!=pointer2);
       pointer1=0;
       while(pointer1!=pointer2){
           pointer1=nums[pointer1];
           pointer2=nums[pointer2];
       }
       return pointer1;
    }
};
