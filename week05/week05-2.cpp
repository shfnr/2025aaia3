//week05-2.cpp
//���xstringstream
#include <iostream>//cin cout getline Ū�g���
#include <sstream> //stringstream�ݭn�L
#include <string> //�ڪ��r��
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��̭����Ů�: ";
    string s;//�r��
    getline(cin, s);//�@���W�J�@����Js
    cout << "Ū��Fs�r��: " << s << endl;

    stringstream ss(s); //�N�r��s�ܦ�ss
    string word; //�r��word
    while(ss>>word){
        cout << "��1�Ӧr: " << word << endl;
    }
}
