#include<iostream>
using namespace std;

//���þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�

class child {
public:
	child(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

template<typename T>
bool compare(T& a, T& b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
//���þ��廯child�İ汾ʵ�֣����廯���ȵ��ã��﷨���£�
template<> bool compare(child& a, child& b) {    //���廯�﷨���ᱻ���ȵ���
	if (a.m_Name == b.m_Name && a.m_Age == a.m_Age) {
		return true;
	}
	else {
		return false;
	}
}

void test01() {
	int a = 10;
	int b = 20;
	bool ret = compare(a, b);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}
}

void test02() {
	child c1("�쳾", 20);
	child c2("�쳾", 20);
	bool ret = compare(c1, c2);  //��������Զ�����������ͣ����Ա�������֪����αȽϣ���������������ػ���廯�Զ�����������
	if (ret) {  
		cout << " c1 == c2 " << endl;
	}
	else {
		cout << " c1 != c2 " << endl;
	}

}

int main() {

	//test01();
	test02();
	system("pause");
	return 0;
}