//week03-2b.cpp�G�X�@�n�g�⦸
//��}�C���_�ӬݬO���ƭt���٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //�]��0�������,���|�ܦ�0,�u����1,������K�ƻ�
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            ans *= nums[i];
        }
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
