//week02-5.cpp �ǲ߭p�e�ĤG�D
//389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����έp26�r���X�{�X��
        int A[256]={};//�}�C�ŧiASCII:0-255�}�C�Τj�A�����w�]��0
        for(int i=0;i<s.length();i++){
            char c=s[i];//����i�Ӧr��
            A[c]++;//������i�����r��
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];
            A[c]--; ///�q��l���X�r��
            if(A[c]<0) return c;//�r��������
        }
        return 0;
    }
};
