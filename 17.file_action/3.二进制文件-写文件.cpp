#include<iostream>
using namespace std;
#include<fstream>    //1������ͷ�ļ�


/*
  �������ļ�
    �򿪷�ʽҪָ��ios::binary
	the function prototype : opsream& write(const chat* buffer, int len);
	�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
*/

class Person {
public:

	char m_Name[64];
	int m_Age;
};

void test01() {
	//2������������
	ofstream out;

	//3�����ļ�
	out.open("Person", ios::out | ios::binary);   //�ö����Ʒ�ʽд�ļ���Ҫ�ں������ | ios::binary

	//4��д�ļ�
    //opsream& write(const chat* buffer, int len);
	Person p = { "��", 2000 };
	out.write((const char*)&p, sizeof(Person));

	//5���ر��ļ�
	out.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}



class forefinger {
public:
	char m_Name[64];  //����
	int m_Age;        //����
};

void test01() {
	//2������������
	ofstream ofs;

	//3�����ļ�
	ofs.open("forefinger.txt", ios::out | ios::binary);

	//4��д�ļ�
	forefinger f = { "�쳾", 18 };
	ofs.write((const char*)&f, sizeof(forefinger));  //�ļ����������  ����ͨ��write�������Զ����Ʒ�ʽд����

	//5���ر��ļ�
	ofs.close();
}
int main() {
	test01();

	system("pause");
	return 0;
}