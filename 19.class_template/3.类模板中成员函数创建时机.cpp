#include<iostream>
using namespace std;

//�ܽ᣺��ģ���еĳ�Ա����������һ��ʼ�ʹ����ģ��ڵ���ʱ��ȥ����

//��ͨ���еĳ�Ա����һ��ʼ�ʹ�������ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

class forfinger1 {
public:
	void showforfinger1() {
		cout << "forfinger 1  " << endl;
	}
};
class Person2 {
public:
	void showforfinger2() {
		cout << "forfinger 2 " << endl;
	}
};
template<typename T>
class Thumb {
public:
	T obj;

    //��ģ���еĳ�Ա����
	void func1() {
		obj.showforfinger1();  //�������޷�ȷ�����ĸ�����������ͣ�֮����û��������Ϊ��������Ա����ֻҪû���þͻ�û����
	}
	void func2() {
		obj.showforfinger2();
	}
};

void test01() {
	Thumb<forfinger1>m;
	m.func1();

}

int main() {
	test01();

	system("pause");
	return 0;
}