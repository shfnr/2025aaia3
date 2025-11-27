//week12-3.cpp學習計畫Math 倒數第二題
class Solution {
public:
    string multiply(string num1, string num2) {
        int N1 = num1.length(), N2 = num2.length();
        vector<int> ans(N1+N2);//最多這麼N1+N2位
        for(int i=N1-1;i>=0;i--){//兩層暴力 for迴圈
            for(int j=N2-1; j>=0;j--){ //倒過來迴圈
                //nums1[i] vs. nums2[j]要記得把字母變數值
                ans[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                if(ans[i+j+1]>9) ans[i+j] += ans[i+j+1] / 10;//進位
                ans[i+j+1] = ans[i+j+1] % 10;//餘數
            }
        }//還沒完成
        string strAns; //答案的字串
        if(ans[0]==0){ //沒有進位最前面是0阿
            for(int i=1; i<N1+N2;i++){//只好避開最前面的0
                strAns += (char)(ans[i]+'0');
            }
        }else{//有進位湊齊N1+N2位
        for(int i=0;i<N1+N2;i++){
            strAns += (char)(ans[i]+'0');
            }
        }//還沒完成
        return strAns;
    }
};
