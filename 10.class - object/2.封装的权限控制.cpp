#include <iostream>
using namespace std;

//访问权限有三种：
//public     公共权限    成员 类内可以访问  类外也可以访问
//protected  保护权限    成员 类内可以访问  内外不可以访问  //儿子可以访问父亲中的保护内容，大概就是父亲想让儿子拿到设为保护
//private    私有权限    成员 类内可以访问  内外不可以访问  //儿子不可以访问父亲的私有内容，大概就是父亲不想让儿子拿到设为私有

class Person {

public:  //公共权限
	string m_Name;

protected://保护权限
	string m_Car;

private:  //私有权限
	int m_passwork;

public:
	void func() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_passwork = 2250;
	}
	
};


int main() {
	Person p1;  //实例化具体对象

	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";  //保护权限的内容，在类外访问不到，在类外不可访问
	//p1.m_passwork = 161616;  //私有权限的内容，在类外也是访问不到，在类外不可访问
	
	//cout << p1.m_Car << endl;  //保护权限，在类外不可访问
	//cout << p1.m_passwork << endl;  //私有权限在类外不可访问



	system("pause");
	return 0;
}