//week02-5.cpp 學習計畫第二題
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //分類統計26字母出現幾次
        int A[256]={};//陣列宣告ASCII:0-255陣列用大括號的預設值0
        for(int i=0;i<s.length();i++){
            char c=s[i];//找到第i個字母
            A[c]++;//分類放進對應字母
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];
            A[c]--; ///從桶子拿出字母
            if(A[c]<0) return c;//字母不夠用
        }
        return 0;
    }
};
