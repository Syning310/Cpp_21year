#include<iostream>
using namespace std;

//�����ɾ������ʼ�±궼�Ǵ�0��ʼ��begin��

/*
 string& insert(int pos, const char* s);                     //�����ַ���
 string& insert(int pos, const string& str);                 //�����ַ���
 string& insert(int pos, int n, char c);                     //��ָ��λ�ò���n���ַ�c
 string& erase(int pos, int n = npos);                       //ɾ����Pos��ʼ��n���ַ�
*/

void test01() {
	string str = "hold";

	//����
	//1��string& insert(int pos, const char* s);                     //�����ַ���
	str.insert(4, " on");  //�ӵڼ����±꿪ʼ�������ַ���
	cout << str << endl;

	//ɾ��
	//string& erase(int pos, int n = npos);                       //ɾ����Pos��ʼ��n���ַ�
	str.erase(4, 1);    //�ӵڼ����±꿪ʼ��ɾ������
	cout << str << endl;

}

int main() {
    test01();

	system("pause");
	return 0;
}