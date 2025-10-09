///week05-3c.cpp Part 2 :output
///part 3:stringstream part 4:reverse
///Part 5火車頭+車廂+車廂+車廂
#include <iostream>
#include <sstream> ///part3:stringstream的檔案是sstream
#include <algorithm>///part 4:reverse的演算法
using namespace std;
int main()
{
    string line; ///一行字的字串 Part1:input
    while( getline(cin, line) ){///讀近來
        stringstream ss(line); ///Part 3用stringstream斷字
        string word;///字放這裡
        ss >> word; ///火車頭在這裡
        reverse( word.begin(), word.end() );
        cout << word; ///火車頭沒有空格'
        while( ss >> word ){ ///part 3用ss斷字
            reverse(word.begin(),word .end() ); ///part4
            cout << " " << word; ///車廂
            ///cout << "讀到了 " << word << endl; ///Part 3
        }

        cout << endl;///cout << line << endl; ///Part 2:output
    }
}
