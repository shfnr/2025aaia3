//week08_1.cpp LeeCode學習計畫
//1672. Richest Customer Wealth 找到最有錢的人有多少錢
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size(); i++){
            int now=0; //迴圈前面now=0
            for(int j=0;j<accounts[0].size();j++){//右手i
                now+=accounts[i][j];//把錢加起來
            }//迴圈裡面更新now陣列,左手i右手i
            //迴圈後面now拿來用
            ans=max(ans,now);  //最有錢的人,更新答案
        }
        return ans;
    }
};
