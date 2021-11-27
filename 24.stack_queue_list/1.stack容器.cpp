#include<iostream>
using namespace std;
#include<stack>

/*  基本概念：stack（堆栈）是一种先进后出的数据结构，它只有一个出口；栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为，可以判断容器是否为空
    可以把它理解为一个收纳箱，先放进去的被子后拿出来，只能操作最顶部的被子；也可以想象成弹夹
	栈中进入数据称为 —— 入栈
	栈中弹出数据称为 —— 出栈

	构造函数：
	1、stack<T> stk;                                           //stack采用模板类实现，stack对象的默认构造形式
	2、stack(const stack& stk);                                //拷贝构造函数
	赋值操作：
	3、stack& operator=(const stack& stk);                     //重载等号运算符
	数据存取：
	4、push(elem);                                             //向栈顶添加元素
	5、pop();                                                  //从栈顶移除第一个元素
	6、top();                                                  //返回栈顶元素
	大小操作：
	7、empty();                                                //判断堆栈是否为空
	8、size();                                                 //返回栈的大小
*/

void test01() {
	//1、stack<T> stk;                                           //stack采用模板类实现，stack对象的默认构造形式
	stack<int> s;

	//4、push(elem);                                             //向栈顶添加元素
	s.push(1); s.push(2); s.push(3); s.push(4); s.push(5); s.push(6); s.push(7);

	//2、stack(const stack& stk);                                //拷贝构造函数
	stack<int> s2(s);

	//8、size();                                                 //返回栈的大小
	cout << "s的大小为：  " << s.size() << endl;
	cout << "s2的大小为：  " << s2.size() << endl;

	//5、pop();                                                  //从栈顶移除第一个元素
	s2.pop();
	cout << "s2的大小为：  " << s2.size() << endl;

	//6、top();                                                  //返回栈顶元素
	cout << "s2栈顶的元素为：  " << s2.top() << endl;

	//3、stack& operator=(const stack& stk);                     //重载等号运算符
	stack<int> s5 = s2;
	cout << "s5的大小为：  " << s5.size() << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}