//week03-1.cpp
//file-save AS�s�ɮɭn���ɦW�g��
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(2);

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';//�L�X�}�C
    cout<<endl;//����

    a.push_back(99);//��99����}�Ca����᭱
    a.push_back(77);//��77����}�Ca����᭱

    for(int i=0;i<a.size();i++) cout<<a[i]<<' ';//�L�X�}�C
    cout<<endl;//����

}
