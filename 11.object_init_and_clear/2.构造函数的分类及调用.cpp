#include <iostream>
using namespace std;

//����
//���ղ������ࣺ �޲ι���(Ĭ�Ϲ���)���вι���
//�������ͷ��ࣺ ��ͨ����Ϳ�������
class person {
public:
	person() {   //���캯��
		cout << "person���޲ι��캯���ĵ���" << endl;
	}
	person(int a) {   //���캯��
		age = a;
		cout << "person���вι��캯���ĵ���" << endl;
	}
	//�������캯��д��  person( const person& p ){}
	person(const person& p) {	
		//��������������������ԣ�������������
		cout << "person�Ŀ������캯���ĵ���" << endl;
		age = p.age;  
	}

	~person() {
		cout << "person�����������ĵ���" << endl;
	}
	int age;
};
//����
void test01() {
	//1�����ŷ�
	//person p1;  //Ĭ�Ϻ����ĵ���
	//person p2(10);  //�вι��캯��
	//person p3(p2);  //�ô���һ��person���ͣ������ÿ������캯��
	//ע������ 1
	//����Ĭ�Ϲ��캯��ʱ����Ҫ�� ()
	//person p4();//������Ϊ���д��룬����������Ϊ��һ������������,������Ϊ�ٴ������
	//cout << "p2������Ϊ��  " << p2.age << endl;
	//cout << "p3������Ϊ��  " << p3.age << endl;  //��Ϊ��p2���뿽�����죬�൱�ڰ�p2���������Զ���������p3

	//2����ʾ��
	person p2 = person(10);  //�вι���  //��������д�ұ߾��൱��  person p2(10)
	person p3 = person(p2);  //��������

	//person(100);  //��������д��ֻ������û������  �ص㣺��ǰִ�н�����ϵͳ������������������
	//cout << "aaaaaa" << endl;

	//ע������ 2
	//��Ҫ���ÿ������캯��  ��ʼ����������
	//person(p3); //�����ض���    ����������Ϊ���Ƕ�������  person(p3) === person p3;

	//3����ʽת����
	person p4 = 10;  //�൱��д��  person p4 = person(10);  == person p4(10);  �вι���
	person p5 = p4;  //��������


}

int main() {
	test01();


	system("pause");
	return 0;
}