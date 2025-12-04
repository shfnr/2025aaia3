//week13-1.cpp 聖誕倒數寫程式advent of code 2025 第一天第一題
//Moodle點擊adventofcode.com網址可看減黑底白字題目
int main() {
    char c;//字母,對應方向L左轉R右轉
    int d;//數字,要轉動幾格
    int now = 50;//一開始的密碼鎖,指向50
    int ans = 0;//轉動時,有幾次停在0的地方(我們的通關密碼)
    while( cin >> c >> d ){//一直讀資料:讀字母,讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now = now - d;//減掉
        if(c=='R') now = now + d;//加上

        now = (now%100 + 100) % 100;//太大了太小了都限制在0-99間
        //cout << "現在的刻度是: "<<now<<"\n";
        if(now==0) ans++;//轉動時停在0的地方
    }
    cout << "答案是: " <<ans;
}
