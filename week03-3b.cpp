//week03-3b.cpp二合一的第二種方法
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) nums[k++]=nums[i];
        }
        for(int i=k;i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
