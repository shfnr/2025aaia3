///week08_4.cpp
///�Ʀr�¬}�d�C�J�`��6174(�j��p-�p��j���ƤC��)
#include <iostream>
#include<vector>
#include<algorithm> ///�t��ksort()�O�t��k
using namespace std;

int main()
{
    cout << "�п�J���N4���(�����P):";
    int n;
    cin >> n;
    for(int i=0; i<7; i++){///�C�B�����w����¬}6174
        vector<int> a;///���Y�ۦp�}�C
        while (n>0){///��֪k��4��Ƴv�@��X��
            a.push_back(n%10);///��o����}�C�̭�
            n = n/10;///��֧��N�G�F
        }
        sort( a.begin(), a.end() );
        int M = a[3]*1000+a[2]*100+a[1]*10+a[0];///�˹L�Ӥj��p
        int m = a[0]*1000+a[1]*100+a[2]*10+a[3];///�p��j
        ///���@�UM�O�ƻ�m�O�ƻ��٨S�o��
        n = M-m;
        cout << M << "�" << m << "�o��:" << n << endl;
    }
}
