#include <iostream>
using namespace std;
//左移运算符就是 " << "

class Bike {
	friend ostream& operator<<(ostream& cout, Bike& b);
	friend void test01();
	//私有成员无法访问就把整个函数CV到此类顶层，加上friend；如果是成员函数记得加作用域

	//通常不会利用成员函数重载左移运算符，因为无法实现cout在左侧
private:
	int m_A;
	int m_B;
};
//ostream的意思是：输出流对象；cout是标准的输出流对象，而且这个对象全局只能有一个所以要加"&"，用引用的方式传入
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream& cout, Bike& b)  //本质 operator<< (cout, b) ；简化 cout << b
{
	cout << "m_A = " << b.m_A << "    m_B = " << b.m_B ;
	return cout;
}
void test01() {
	Bike b1;
	b1.m_A = 50;
	b1.m_B = 10;
	//cout << b1;//本质是operator<< (cout ,b1);“operator”<<是函数名；（cout，b1）是传入的参数
	//因为这个函数返回值是void所以后面不能加“ <<endl; ”；


	cout << b1 << "    hello world" << endl; 
	//如果全局函数中return cout 那就可以加 <<endl ；也就可以往后追加输出其他内容（链式编程）
}

int main() {
	test01();

	system("pause");
	return 0;
}