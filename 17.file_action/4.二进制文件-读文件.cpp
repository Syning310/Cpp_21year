#include<iostream>
using namespace std;
#include<fstream>  //1��ͷ�ļ�



/*
  the function prototype : istream& read(char* buffer, int len);
  �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
*/

class Person {
public:

	char m_Name[64];
	int m_Age;
};
void test01() {
	//2����������
	ifstream in;
	//3�����ļ�  ���ļ���Ҫ���ж��Ƿ�򿪳ɹ�
	in.open("Person", ios::in | ios::binary);  //�����Ʋ���Ҫ����ios::binary

	if (!in.is_open()) {   //�򿪳ɹ����ص���true
		cout << "�ļ������ڻ�Ϊ�գ�" << endl;
	}
	//4�����ļ�
	Person p;
	in.read((char*)&p, sizeof(Person));

	cout << "������ " << p.m_Name << "  ����: " << p.m_Age << endl;
	//5���ر��ļ�
	in.close();

}
int main() {
	test01();

	system("pause");
	return 0;
}

class forefinger {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
    //2������������
	ifstream ifs;

    //3�����ļ�  �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("forefinger.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4�����ļ�
	forefinger f;
	ifs.read( (char*)&f, sizeof(forefinger) );
	cout << "������  " << f.m_Name << "    ���䣺  " << f.m_Age << endl;

	//5���ر��ļ�
	ifs.close();
}

int main() {
	test01();


	system("pause");
	return 0;
}