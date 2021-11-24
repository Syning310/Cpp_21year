#include<iostream>
using namespace std;

//全局函数类内实现 —— 直接在类内声明友元即可
//全局函数类外实现 —— 需要提前让编译器知道全局函数的存在，也就是提前声明；类内声明，类外实现

template<typename T1, typename T2>
class index {
	//全局函数 类内实现
	friend void printIndex(index<T1, T2> p) {
		cout << "姓名：  " << p.m_Name << "\t年龄：  " << p.m_Age << endl;
	}
	//全局函数类外实现
	template<typename T1, typename T2>  //如果不加这个模板，这个是全局函数声明，而那个类外书写的函数是函数模板，所以无法运行
	friend void printIndex2(index<T1, T2> p);  //类内声明，类外实现

public:
	index(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
template<typename T1, typename T2>    //加上模板，下面这个函数就变成了函数模板
void printIndex2(index<T1, T2> p) {
	cout << "类外实现 —— 姓名：  " << p.m_Name << "\t类外实现 —— 年龄：  " << p.m_Age << endl;
}

void test01() {
	index<string, int> i("亦宁", 2000);
	printIndex(i);  //全局函数类外实现

	index<string, int> o("青青", 130000);
	printIndex2(o);
}


int main() {
	test01();

	system("pause");
	return 0;
}