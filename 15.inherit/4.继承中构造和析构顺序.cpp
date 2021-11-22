#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "基类的构造函数调用！" << endl;
	}
	~Base() {
		cout << "基类的析构函数调用！" << endl;
	}
};
class son : public Base {
public:
	son() {
		cout << "派生类的构造函数调用！" << endl;
	}
	~son() {
		cout << "派生类的析构函数调用！" << endl;
	}
};
void test01() {
	//Base b;
	son s;  //继承中的构造和析构顺序：先构造父类，再构造子类，次析构子类，最后析构父类；栈区中先进后出
}

int main() {
	test01();

	system("pause");
	return 0;
}