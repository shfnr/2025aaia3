//week08_1.cpp LeeCode�ǲ߭p�e
//1672. Richest Customer Wealth ���̦������H���h�ֿ�
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size(); i++){
            int now=0; //�j��e��now=0
            for(int j=0;j<accounts[0].size();j++){//�k��i
                now+=accounts[i][j];//����[�_��
            }//�j��̭���snow�}�C,����i�k��i
            //�j��᭱now���ӥ�
            ans=max(ans,now);  //�̦������H,��s����
        }
        return ans;
    }
};
