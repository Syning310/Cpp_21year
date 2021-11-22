#include <iostream>
using namespace std;

//一个儿子认多个爹  语法：
//class 子类 : 继承方式 父类1 , 继承方式 父类2， ......
//多继承可能会引发父类中有同名成员出现，需要加作用域区分

class Father1 {
public:
	Father1() {
		m_A = 10;
	}
	int m_A;
};
class Father2 {
public:
	Father2() {
		m_A = 20;
	}
	int m_A;
};
class son : public Father1, public Father2 {
public:
	son() {
		m_C = 30;
		m_D = 40;
	}
	int m_C;
	int m_D;
};
void test01() {
	son s;
	cout << "子类占用内存空间" << sizeof(s) << endl;  
	cout << "father1中的 m_A = " << s.Father1::m_A << endl;  //出现二义性，需要加作用域
}

int main() {
	test01();


	system("pause");
	return 0;
}