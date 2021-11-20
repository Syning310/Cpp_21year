#include<iostream>
using namespace std;
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码；那么这一块代码是如何区分哪个对象调用自己呢
//C++通过提供特殊的对象指针，this指针，解决上述问题。this指针指向被调用的成员函数所属的对象（谁调用它那么this就指向谁）
//this指针隐含在每一个非静态的成员函数内；不需要定义，直接使用即可
//用途：1、当形参和成员变量同名时，可以用this指针来区分；2、在类的非静态成员函数中返回对象本身，可使用return *this

class america {
public:
	america(int age) {
		this->age = age;       //如果要赋值的属性和形参一样，用this-> 来区分
	}                          //this指向的是被调用的成员函数所属的对象：这里的this指向的是a1
	america& americaAddamerica(america& a) {  //这个形参的意思是america& a = 传入的实参
		this->age += a.age;  //自身的年龄加上传进来的年龄
		return *this;  //this是指向a3的指针，而*this指向的就是p2这个对象本身
	}
	//如果没有加&那么就是值返回，会调用拷贝构造函数一个新的数据，而加了&就能一直返回a3本身

	int age;
};
//1、解决名称冲突
void test01() {
	america a1(200);
	cout << "a1的年龄为：  " << a1.age << endl;
}
//2、返回对象本身用return*this
void test02() {
	america a2(1000);
	america a3(6000);
	//因为函数调用完之后return了a3的本身所以+=之后，引用函数的代码变成了a3，所以可以继续进行"."操作
	a3.americaAddamerica(a2).americaAddamerica(a2).americaAddamerica(a2).americaAddamerica(a2);//链式编程思想
	
	cout << "a3的年龄为：  " << a3.age << endl;
	
}
int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}