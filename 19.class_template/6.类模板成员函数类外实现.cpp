#include<iostream>
using namespace std;

//�ܽ᣺��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�

template<typename T1, typename T2>
class index {
public:
	index(T1 name, T2 age);
	void ShowInfo();

	T1 m_Name;
	T2 m_Age;
};
//��ģ��ɹ���Ա��������ʵ�֣�    ������ʵ��Ҫдģ�壬�����������Ż���ʶ���캯�������б���ġ�T1���͡�T2��
//  index(T1 name, T2 age);
template<typename T1, typename T2>  
index<T1, T2>::index(T1 name, T2 age) {  //���index����û�м���ģ������б��Ǿ�����ͨ�ĳ�Ա��������ʵ�֣�
	this->m_Name = name;
	this->m_Age = age;
}
//��ģ��ĳ�Ա��������ʵ��  
//	void ShowInfo();
template<typename T1,typename T2>    //���㺯�������õ�T1��T2ҲҪ����ģ�壬�����������Ż�֪���������ģ��ĳ�Ա��������ʵ��
void index<T1, T2>::ShowInfo() {    //Ϊ����������һ����ģ��ĳ�Ա��������ʵ�֣����԰�index<T1, T2>����һ�����壬������
	cout << "������  " << this->m_Name << endl;
	cout << "���䣺  " << this->m_Age << endl;
}


void test01() {
	index <string, int> i("����", 1000000);
	i.ShowInfo();
}

int main() {
	test01();

	system("pause");
	return 0;
}