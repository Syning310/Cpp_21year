#include<iostream>
using namespace std;


//�ܽ᣺�����������Ӵ����ܣ�������ʵ�ʿ����л�ȡ��Ч����Ϣ

//���ܣ�  ���ַ����л�ȡ��Ҫ���Ӵ�

//����ԭ�ͣ�  string substr(int pos = 0; int n = npos) const;    //������pos��ʼ��n���ַ���ɵ��ַ���

void test01() {
	string str = "Syning310@outlook.com";
	
	int i = str.find("@");    //���ò��ҵĺ����ҵ�@���±꣬�����������ֵ��int

	string email = str.substr(0, i);
	cout << "�ҵ�����Ϊ��  " << email << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}