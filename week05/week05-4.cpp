//week05-4.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i] = tolower( s[i] );
        } //�C�Ӧr�����ܦ��p�g(���㪩�n#include <ctype.a>)
        //�άO��#include <cctype>��ӬO�P�@���ɮ�
        return s; //���װe�X�h
    }
};
