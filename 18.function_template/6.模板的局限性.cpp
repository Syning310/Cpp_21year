#include<iostream>
using namespace std;

//利用具体化的模板，可以解决自定义类型的通用化

class child {
public:
	child(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

template<typename T>
bool compare(T& a, T& b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
//利用具体化child的版本实现，具体化优先调用；语法如下：
template<> bool compare(child& a, child& b) {    //具体化语法，会被优先调用
	if (a.m_Name == b.m_Name && a.m_Age == a.m_Age) {
		return true;
	}
	else {
		return false;
	}
}

void test01() {
	int a = 10;
	int b = 20;
	bool ret = compare(a, b);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}
}

void test02() {
	child c1("红尘", 20);
	child c2("红尘", 20);
	bool ret = compare(c1, c2);  //传入的是自定义的数据类型，所以编译器不知道如何比较；可以用运算符重载或具体化自定义数据类型
	if (ret) {  
		cout << " c1 == c2 " << endl;
	}
	else {
		cout << " c1 != c2 " << endl;
	}

}

int main() {

	//test01();
	test02();
	system("pause");
	return 0;
}