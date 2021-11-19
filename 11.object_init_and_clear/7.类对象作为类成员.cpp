#include<iostream>
using namespace std;
//C++类中的成员，可以是另一个类的对象，称为 对象成员    例如：
//class A {  }
//  class B 
// {
//     A a;   B类中有对象A的成员，所以A称为对象成员
// }          //那么当创建B对象时，A与B的构造和析构顺序谁先谁后？

class phone {  
public:
	phone(string pName) {
		m_pName = pName;
		cout << "phone的构造函数调用" << endl;
	}
	~phone() {
		cout << "phone的析构函数调用" << endl;
	}

	string m_pName;  //手机品牌
};
class person {
public:                                    //phone m_phone = pName;  //隐式转换法
	person(string name, string pName) :m_Name(name),m_phone(pName)  
	{
		cout << "person的构造函数调用" << endl;
	}
	~person() {
		cout << "person的析构函数调用" << endl;
	}
	string m_Name;  //人的姓名
	phone m_phone;  //对象成员 当其他类的对象作为本类成员的时候，那么我创造本类的对象，他会优先构造对象成员的对象
	                //(构造函数顺序）当其他类对象作为本类成员的时候，优先构造对象成员，其次构造自身
	                //(析构函数顺序)析构的顺序与构造相反，优先析构自身，其次析构对象成员
};

void test01() {
	person p("张三", "苹果MAX Plues");  //当这个函数执行完时，p对象被释放，那么会先释放person，再释放phone
	cout << p.m_Name << "拿着一把" << p.m_phone.m_pName << "手机" << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}