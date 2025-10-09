//week05-2.cpp
//熟悉stringstream
#include <iostream>//cin cout getline 讀寫資料
#include <sstream> //stringstream需要他
#include <string> //我的字串
using namespace std;
int main()
{
    cout << "請輸入一段英文裡面有空格: ";
    string s;//字串
    getline(cin, s);//一次獨入一整行放入s
    cout << "讀到了s字串: " << s << endl;

    stringstream ss(s); //將字串s變成ss
    string word; //字串word
    while(ss>>word){
        cout << "有1個字: " << word << endl;
    }
}
