#include<iostream>
using namespace std;

//�����������ģ�壬�������ָ����������T����������

//1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//2�������ָ�����������޷�����������ڴ�
//3����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��

template<typename T>
class Base {
public:
	Base() {
		cout << "T = " << typeid(T).name() << endl;
	}
	T m;
}; 
//class son : public Base  //����Ҫ֪��������T���������ͣ����ܼ̳и����࣬�����������֪���÷�������ڴ�ռ�
class son : public Base<int> {    //1��������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
public:

};

//3����������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<typename T1, typename T2>
class son2 : public Base<T1> {
public:
	son2() {
		cout << "T1 = " << typeid(T1).name() << endl;
		cout << "T2 = " << typeid(T2).name() << endl;
	}
	T2 obj;
};

void test01() {
	
	Base<double>b;
	son2<int, char>s2;
}


int main() {
	test01();

	system("pause");
	return 0;
}