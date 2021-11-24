#include<iostream>
using namespace std;

//1��ָ����������� ����  ֱ����ʾ�������������
//2������ģ�廯     ����  �������еĲ�����Ϊģ����д���
//3��������ģ�廯   ����  ������������� ģ�廯���д���

template<typename T1, typename T2>
class Shang {
public:
	Shang(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowInfo() {
		cout << "������  " << this->m_Name << "\t���䣺  " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};
  //1��ָ����������� ����  ֱ����ʾ�������������
void PrintShang(Shang<string, int>& s) {
	s.ShowInfo();
}
void test01() {
	Shang<string, int> s("������", 2000);
	PrintShang(s);
}

  //2������ģ�廯     ����  �������еĲ�����Ϊģ����д���
template<typename T1, typename T2>  //��������Ϊģ�壬���β��������ͱ�Ϊģ�����ͣ������Ϳ������β��б��д���ģ����������
void PrintShang2(Shang<T1, T2>& w) {
	w.ShowInfo();
    cout << "T1 = " << typeid(T1).name() << "\tT = " << typeid(T2).name() << endl;
}
void test02() {
	Shang<string, int>w("����", 130000);
	PrintShang2(w);

}

  //3��������ģ�廯   ����  ������������� ģ�廯���д���
template<typename T>       
void PrintShang3(T& l) {   //��������Ϊģ�壬��������ǰ������࣬��Ϊģ�������ñ������Ƶ�
	l.ShowInfo();
	cout << "T = " << typeid(T).name() << endl;  
}
void test03() {
	Shang<string, int> l("����", 2400);
	PrintShang3(l);
}
int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}