///week05-3c.cpp Part 2 :output
///part 3:stringstream part 4:reverse
///Part 5�����Y+���[+���[+���[
#include <iostream>
#include <sstream> ///part3:stringstream���ɮ׬Osstream
#include <algorithm>///part 4:reverse���t��k
using namespace std;
int main()
{
    string line; ///�@��r���r�� Part1:input
    while( getline(cin, line) ){///Ū���
        stringstream ss(line); ///Part 3��stringstream�_�r
        string word;///�r��o��
        ss >> word; ///�����Y�b�o��
        reverse( word.begin(), word.end() );
        cout << word; ///�����Y�S���Ů�'
        while( ss >> word ){ ///part 3��ss�_�r
            reverse(word.begin(),word .end() ); ///part4
            cout << " " << word; ///���[
            ///cout << "Ū��F " << word << endl; ///Part 3
        }

        cout << endl;///cout << line << endl; ///Part 2:output
    }
}
