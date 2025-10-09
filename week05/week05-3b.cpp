///week05-3b.cpp Part 2 :output
///part 3:stringstream part 4:reverse
#include <iostream>
#include <sstream> ///part3:stringstream的檔案是sstream
#include <algorithm>///part 4:reverse
using namespace std;
int main()
{
    string line; ///一行字的字串 Part1:input
    while( getline(cin, line) ){///讀近來
        stringstream ss(line); ///Part 3用stringstream斷字
        string word;///字放這裡
        while( ss >> word ){
            reverse(word.begin(),word .end() ); ///part4
            cout << "讀到了 " << word << endl; ///Part 3
        }

        cout << line << endl; ///Part 2:output
    }
}
