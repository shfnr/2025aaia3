//week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //��r���ܦ����e�Ъ�cin iostream
        string word; //�r�ꪺword
        //ss >> word; //�ܹ����e�Ъ�cin >> word
        //cout << "Ū��F" <<word << "\n"; //���ե�
        //ss >> word; //�ܹ����e�Ъ�cin >> word
        //cout << "Ū��F" <<word << "\n"; //���ե�
        while( ss>> word ){
            //�̭����򳣤���
        }
        return word.length();//�̫᪺�r������//return 0; //�H�K
    }
};
