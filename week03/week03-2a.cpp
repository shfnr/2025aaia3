//week03-2a.cpp�G�X�@�n�g�⦸
//��}�C���_�ӬݬO���ƭt���٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //�]��0�������,���|�ܦ�0,�u����1,������K�ƻ�
        for(int i=0;i<nums.size();i++){
            ans *= nums[i];
        }
    }
};
