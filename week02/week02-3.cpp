//week02-3.cpp Part2 �ϥ�C++2011�~�s�����r��stio()�\��
#include <iostream>  //cin coutŪ�J���,�L�X���
#include <string>  //string�r�ꪺ�\��
using namespace std;///�ϥΩR�W�Ŷ��зǪ�std;
int main()
{
	string a;///�ŧi�r��a
	cin >> a;///Ū�J�r��a
	string ans;///�ŧi�r��ans�񵪮ץ�
	int N=a.length();///�r��a������
	for(int i=N-1; i>=0; i--){///�˹L�Ӱj��
		ans+=a[i];///�b�j���,��a[i]���ans���᭱
	}
	cout<<a<<'+'<<stoi(ans)<<'='
        <<stoi(a)+stoi(ans)<<endl;
} //stoi() is "string to int"��r���ܦ����
