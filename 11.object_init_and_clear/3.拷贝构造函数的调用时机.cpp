#include<iostream>
using namespace std;

//ͨ�����������
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2��ֵ���ݵķ�ʽ������������ֵ
//3����ֵ��ʽ���ؾֲ�����

class person {
public:
	person() {
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	person(int age) {
		cout << "�вι��캯������" << endl;
			m_Age = age;
	}
	person(const person& p) {
		cout << "�������캯������" << endl;
		m_Age = p.m_Age;
	}

	~person() {
		cout << "person��������������" << endl;
	}
	int m_Age;
};

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	person p1(20);
	person p2(p1);
	cout << "p2������Ϊ��  " << p2.m_Age << endl;
}
//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(person p) {

}
void test02() {
	person p;
	doWork(p);  //ֵ���ݣ�����Ҳ�ǿ�������
}

//3����ֵ��ʽ���ؾֲ�����
person doWork2() {
	person p1;
	cout << (int*)&p1 << endl;
	return p1;  //���ص�p1���´�����һ������ԭ����p1�ٺ���ִ����󣬾ͻᱻ�ͷ�
}
void test03() {
	person p = doWork2();
	cout << (int*)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();


	system("pause");
	return 0;
}