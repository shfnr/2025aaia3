//week03-2b.cpp璶糶ㄢΩ
//р皚Θ癬ㄓ琌タ计璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; //0ヴ计,常穦跑Θ0,Τ1,ぐ或獽或
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
