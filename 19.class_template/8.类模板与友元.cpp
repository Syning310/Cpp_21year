#include<iostream>
using namespace std;

//ȫ�ֺ�������ʵ�� ���� ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� ���� ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ�Ҳ������ǰ��������������������ʵ��

template<typename T1, typename T2>
class index {
	//ȫ�ֺ��� ����ʵ��
	friend void printIndex(index<T1, T2> p) {
		cout << "������  " << p.m_Name << "\t���䣺  " << p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	template<typename T1, typename T2>  //����������ģ�壬�����ȫ�ֺ������������Ǹ�������д�ĺ����Ǻ���ģ�壬�����޷�����
	friend void printIndex2(index<T1, T2> p);  //��������������ʵ��

public:
	index(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
template<typename T1, typename T2>    //����ģ�壬������������ͱ���˺���ģ��
void printIndex2(index<T1, T2> p) {
	cout << "����ʵ�� ���� ������  " << p.m_Name << "\t����ʵ�� ���� ���䣺  " << p.m_Age << endl;
}

void test01() {
	index<string, int> i("����", 2000);
	printIndex(i);  //ȫ�ֺ�������ʵ��

	index<string, int> o("����", 130000);
	printIndex2(o);
}


int main() {
	test01();

	system("pause");
	return 0;
}