#include<iostream>
using namespace std;
//常含数：1、成员函数加const之后称为常函数
//        2、常函数内不可以修改成员属性
//        3、成员属性声明时加关键字mutable后，在常函数中依然可以修改
//常对象：1、声明对象前加const称为常对象
//        2、常对象只能调用常函数

class america {
public:
	//常函数    const showAmerica * const this  前面的const是下一行函数后面的const
	void showAmerica() const    //在成员函数后面加上const，修饰的是this指向，让指向的值也不可以修改
	{   //this指针的本质时  指针常量  特点是指针的指向是不可以修改的
		//this->m_A = 200;	//常函数内不可以修改成员属性
	}

	void func() const{
		m_B = 1000;
	}
	void func2(){}
	int m_A;
	mutable int m_B;  //特殊变量，即使在常函数中，也可修改这个值  mutable（可变）
};

void test01() {
	america a1;
	a1.showAmerica();
	a1.func();
}

void test02() {
	//常对象
	const america a2;  //1、在对象前加const变为常对象
	//a2.m_A = 100;  //错误，常对象中也不可以修改属性
	a2.m_B = 50000;  //m_B因为加了mutable，所以不管在常函数下，还是常对象里都可以修改
	//2、常对象只能调用常函数
	a2.func();
	//a2.func2();//错误,常对象只能调用常函数;因为普通成员函数可以修改属性
}
int main() {

	test02();

	system("pause");
	return 0;
}