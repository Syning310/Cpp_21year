#include <iostream>
using namespace std;
//C++�ڱ��������ٸ�һ�������4��������
// 1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ���
// 2��Ĭ�������������޲Σ�������Ϊ�գ���
// 3��Ĭ�Ͽ������캯���������Խ���ֵ����;
// 4����ֵ�����operator= �����Խ���ֵ����


class Thumb {
public:
	Thumb(int age) {
		m_Age = new int(age);  //�����ǣ�ָ��m_Age��ŵ��ǵ�ַ ��ŵ���age�ڶ����е��ڴ��ַ
	}
    //���ظ�ֵ�����
	Thumb& operator=(Thumb& b)
	{
		//�������ṩ����ǳ������m_Age = b.m_Age;
	    //Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*b.m_Age);  //����Ĳ���
	    //�ͷŸɾ��ٸ�ֵ
		return* this;  //���ض��������ر���Ҫreturn* this������ֵҪ��&
	}

	~Thumb() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	int *m_Age;
};
void test01() {
	Thumb p1(18);
	Thumb p2(20);
	Thumb p3(30);
	p2 = p1;  //p2 = p1 ����һ��ǳ���������������еĳ�Աm_Age���ݾͻ���һ���ģ���ŵ�����ͬ��ָ��
	//�����������ظ��ͷţ���Ƿ��������������������������ǳ��������������
    p3 = p2 = p1; //��Ϊ����ֵ��void�����ԷǷ�������������������ض��������ر���Ҫreturn* this������ֵҪ��&
	cout << "p1������Ϊ��  " << *p1.m_Age << endl;
	cout << "p2������Ϊ��  " << *p2.m_Age << endl;
	cout << "p3������Ϊ��  " << *p3.m_Age << endl;
}


int main() {
	 test01();

	/*int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a=  " << a << endl;
	cout << "b=  " << b << endl;
	cout << "c=  " << c << endl;*/

	system("pause");
	return 0;
}