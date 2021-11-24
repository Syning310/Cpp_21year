#include<iostream>
using namespace std;

//总结：类模板中成员函数类外实现时，需要加上模板参数列表

template<typename T1, typename T2>
class index {
public:
	index(T1 name, T2 age);
	void ShowInfo();

	T1 m_Name;
	T2 m_Age;
};
//类模板成构造员函数类外实现：    在类外实现要写模板，这样编译器才会认识构造函数参数列表里的“T1”和“T2”
//  index(T1 name, T2 age);
template<typename T1, typename T2>  
index<T1, T2>::index(T1 name, T2 age) {  //如果index后面没有加上模板参数列表，那就是普通的成员函数类外实现，
	this->m_Name = name;
	this->m_Age = age;
}
//类模板的成员函数类外实现  
//	void ShowInfo();
template<typename T1,typename T2>    //就算函数不会用到T1和T2也要加上模板，这样编译器才会知道这个是类模板的成员函数类外实现
void index<T1, T2>::ShowInfo() {    //为了体现这是一个类模板的成员函数类外实现，可以把index<T1, T2>看作一个整体，作用域
	cout << "姓名：  " << this->m_Name << endl;
	cout << "年龄：  " << this->m_Age << endl;
}


void test01() {
	index <string, int> i("娜娜", 1000000);
	i.ShowInfo();
}

int main() {
	test01();

	system("pause");
	return 0;
}