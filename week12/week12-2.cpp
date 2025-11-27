//week12-2.cpp學習計畫 Math 第四題
//找可構成三角形的三邊長,加起來最大 兩邊和大於第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());//先排序
        //先練習倒過來迴圈,把大到小印出來
        //for(int i=nums.size()-1; i>=0; i--){
        //    cout << nums[i] << " ";
        //}//把大到小印出來,正確
        for(int i=nums.size()-1; i>=2; i--){
            //取出[num[i] vs.nums[i-1] nums[i-2]
            if(nums[i] < nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] +nums[i-2];
            }//找到最大的合法三角形把三邊加起來
        }
        return 0;//找不到答案,return 0
    }
};
