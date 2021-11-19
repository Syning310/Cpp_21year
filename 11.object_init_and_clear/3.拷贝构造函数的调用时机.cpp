#include<iostream>
using namespace std;

//通常有三种情况
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、以值方式返回局部对象

class person {
public:
	person() {
		cout << "默认构造函数调用" << endl;
	}
	person(int age) {
		cout << "有参构造函数调用" << endl;
			m_Age = age;
	}
	person(const person& p) {
		cout << "拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~person() {
		cout << "person的析构函数调用" << endl;
	}
	int m_Age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	person p1(20);
	person p2(p1);
	cout << "p2的年龄为：  " << p2.m_Age << endl;
}
//2、值传递的方式给函数参数传值
void doWork(person p) {

}
void test02() {
	person p;
	doWork(p);  //值传递，传入也是拷贝函数
}

//3、以值方式返回局部对象
person doWork2() {
	person p1;
	cout << (int*)&p1 << endl;
	return p1;  //返回的p1是新创建的一个对象，原来的p1再函数执行完后，就会被释放
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