#include <iostream>
using namespace std;
//ǳ�������򵥵ĸ�ֵ��������  ���Ǳ������ṩ�Ŀ������캯��������ݶ���ǳ����
//������ڶ�����������ռ䣬���п�������
//����������ٶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������

class person {
public:
	person() {
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	person(int age ,int height) {
		m_Age = age;
		m_Height = new int(height);  
		cout << "person���вι��캯������" << endl;
	}
	//�Լ�ʵ�ֿ������캯��  ���ǳ��������������
	person(const person& p) {
		cout << "person��������ĵ���" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //������Ĭ��ʵ�־������д���
	    //�������

		m_Height = new int(*p.m_Height);  //�ֶ�����һ��������ʹ����ָ�벻�ύ��

	}

	~person() {
		//����������;��  �����������������ͷŲ���
		if (m_Height != NULL) {  //�ͷŶ�������
			delete m_Height;     //����������ݲ�Ϊ�գ���ô�ͷŶ����������
			m_Height = NULL;     //��ֹ����Ұָ��
		}
		cout << "person��������������" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01() {
	//ǳ�������������⣺�����ֽ������ԭ��  p2���������ȳ������������������������
	                  //��p1ִ�к�Ҳ��ִ�������������൱��ִ�����ͷ������ζ���������ݣ����Ի�Ƿ�����
	                  //ǳ����������Ҫ����������н��
	person p1(18, 189);    //�Ƚ������������������ͷ�
	cout << "p1������Ϊ��  " << p1.m_Age << "  p1�����Ϊ��  " << *p1.m_Height << endl;

	person p2(p1);  //����ȳ�����������ȱ����������ͷ�
	cout << "p2������Ϊ��  " << p2.m_Age << "  p2�����Ϊ��  " << *p2.m_Height << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}