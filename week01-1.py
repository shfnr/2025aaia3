//LeeCode 28.:Find the Index of the Firth Occurence in a String
//在 haystack 乾稻草堆裡找到needle針(大海撈針)
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H =  haystack.length(),N = needle.length();  //字串長度
        for(int i=0;i<=H-N ;i++){  //9減3得到6
            //.substr(開始,長度)部分字串
            if(haystack.substr(i,N) == needle) return i;  //找到答案
        }
        return -1;//迴圈裡找不到needle就失敗
    }
};