///week05-3b.cpp Part 2 :output
///part 3:stringstream part 4:reverse
#include <iostream>
#include <sstream> ///part3:stringstream���ɮ׬Osstream
#include <algorithm>///part 4:reverse
using namespace std;
int main()
{
    string line; ///�@��r���r�� Part1:input
    while( getline(cin, line) ){///Ū���
        stringstream ss(line); ///Part 3��stringstream�_�r
        string word;///�r��o��
        while( ss >> word ){
            reverse(word.begin(),word .end() ); ///part4
            cout << "Ū��F " << word << endl; ///Part 3
        }

        cout << line << endl; ///Part 2:output
    }
}
