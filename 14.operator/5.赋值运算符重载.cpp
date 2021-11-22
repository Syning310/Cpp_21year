#include <iostream>
using namespace std;
//C++在编译器至少给一个类添加4个函数：
// 1、默认构造函数（无参，函数体为空）；
// 2、默认析构函数（无参，函数体为空）；
// 3、默认拷贝构造函数，堆属性进行值拷贝;
// 4、赋值运算符operator= 对属性进行值拷贝


class Thumb {
public:
	Thumb(int age) {
		m_Age = new int(age);  //本质是：指针m_Age存放的是地址 存放的是age在堆区中的内存地址
	}
    //重载赋值运算符
	Thumb& operator=(Thumb& b)
	{
		//编译器提供的是浅拷贝：m_Age = b.m_Age;
	    //应该先判断是否有属性在堆区，如果有先释放干净，然后在深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*b.m_Age);  //深拷贝的操作
	    //释放干净再赋值
		return* this;  //返回对象本身；返回本身要return* this，返回值要加&
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
	p2 = p1;  //p2 = p1 会做一个浅拷贝，两个对象中的成员m_Age内容就会变成一样的，存放的是相同的指针
	//堆区的内容重复释放，会非法操作；解决方案：利用深拷贝解决浅拷贝带来的问题
    p3 = p2 = p1; //因为返回值是void，所以非法操作；解决方案：返回对象本身；返回本身要return* this，返回值要加&
	cout << "p1的年龄为：  " << *p1.m_Age << endl;
	cout << "p2的年龄为：  " << *p2.m_Age << endl;
	cout << "p3的年龄为：  " << *p3.m_Age << endl;
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