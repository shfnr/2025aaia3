///week10-3.cpp把羅馬數字算出來
//LeeCode13. Roman to Integer
//1:I 2:II 3:III 4:IV 5:V
//6:VI 7:VII 8:VIII 9:IX 10:X
//11:XI 12:XII
//(1)要有對照表字母對數字,(2)正常相加倒裝句
class Solution {
public:
    int helper(char c) {//把一個字母變成一個數字
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s){
        int total = 0,prev = 0,now = 0;
        for(int i=0;i<s.length();i++){
            //錯誤寫法total += helper( s[i] )//還沒處理的倒裝句
            prev = now;//現在變成舊的prev數字
            now = helper( s[i] ); //total += helper( s[i] );
            if(prev < now)total=total - prev - prev + now;//倒裝句前小後大
            else total += now;
        }
        return total;
    }
};
