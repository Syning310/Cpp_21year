#include <iostream>
using namespace std;

//分类
//按照参数分类： 无参构造(默认构造)和有参构造
//按照类型分类： 普通构造和拷贝构造
class person {
public:
	person() {   //构造函数
		cout << "person的无参构造函数的调用" << endl;
	}
	person(int a) {   //构造函数
		age = a;
		cout << "person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数写法  person( const person& p ){}
	person(const person& p) {	
		//将传入的人身上所有属性，拷贝到我身上
		cout << "person的拷贝构造函数的调用" << endl;
		age = p.age;  
	}

	~person() {
		cout << "person的析构函数的调用" << endl;
	}
	int age;
};
//调用
void test01() {
	//1、括号法
	//person p1;  //默认函数的调用
	//person p2(10);  //有参构造函数
	//person p3(p2);  //用传入一个person类型，来调用拷贝构造函数
	//注意事项 1
	//调用默认构造函数时，不要加 ()
	//person p4();//错误，因为这行代码，编译器会认为是一个函数的声明,不会认为再创造对象
	//cout << "p2的年龄为：  " << p2.age << endl;
	//cout << "p3的年龄为：  " << p3.age << endl;  //因为把p2传入拷贝构造，相当于把p2的所有属性都拷贝给了p3

	//2、显示法
	person p2 = person(10);  //有参构造  //匿名对象写右边就相当于  person p2(10)
	person p3 = person(p2);  //拷贝构造

	//person(100);  //匿名对象写法只有类型没有类名  特点：当前执行结束后，系统会立即回收匿名对象
	//cout << "aaaaaa" << endl;

	//注意事项 2
	//不要利用拷贝构造函数  初始化匿名对象
	//person(p3); //错误，重定义    编译器会认为这是对象声明  person(p3) === person p3;

	//3、隐式转换法
	person p4 = 10;  //相当于写了  person p4 = person(10);  == person p4(10);  有参构造
	person p5 = p4;  //拷贝构造


}

int main() {
	test01();


	system("pause");
	return 0;
}