#include <iostream>
using namespace std;

//�������������()Ҳ��������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶���д�����ǳ����

//��ӡ�����
class MyPrint {
public:
	//���صĺ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test02(string test) {
	cout << test << endl;
}
void test01() {
	MyPrint m1;
		
	m1("hello world");  //���õ������������������ʹ�������ǳ��������ã���˳�Ϊ�º���
	test02("hello world");  //���õ���ȫ�ֺ���
}

//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};
void test03() {
	MyAdd add1;
	int sum = add1(100, 100);  //�º���û�й̶���д�����ǳ����
	cout << "sum = " << sum << endl;

	//������������:ͨ��һ����������һ��С���Ŵ�������������ص㣺��ǰ��ִ���꣬�������ͷ�
	cout << MyAdd()(100, 500) << endl;  //������Ϊ��û����
	//��Ϊ��������С���ţ������Ƿº���
}
int main() {

	//test01();
	test03();

	system("pause");
	return 0;
}