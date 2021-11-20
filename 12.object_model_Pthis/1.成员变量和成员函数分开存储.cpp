#include<iostream>
using namespace std;

//总结：只有非静态成员变量属于类的对象上，其他对象都不属于
//空对象的占用的内存空间是1个字节

class person {

};
class America {
public:
	
	int A;  //非静态成员变量  属于类的对象上

	static int m_B;  //静态成员变量  不属于类的对象上   在全局区里

	void func(){}  //非静态成员函数  不属于类的对象上

	static void func2(){}  //静态成员函数  也不属于类的对象上  在全局区里

};
int America::m_B = 500;

void test01() {
	person p;
	cout << "p所占的内存空间：  " << sizeof(p) << endl;  //空对象占用空间为：1个字节
	//C++编译器会给每个空对象也分配一个字节的内存空间，是为了区分空对象所占内存的位置
	//每一个空对象都有一个独一无二的内存地址
}
void test02() {
	America a1;
	cout << "a1所占的内存空间：  " << sizeof(a1) << endl;  //四个字节  
}

int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}