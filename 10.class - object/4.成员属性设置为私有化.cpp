#include <iostream>
using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性

class Person {
public:
	//设置姓名可读可写
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	//设置年龄  只读
	int getAge() {
		m_Age = 2400;
		return m_Age;
	}
	//设置情人  只写
	void setLover(string lover) {
		m_Lover = lover;
	}
private:
	string m_Name;  //姓名
	int m_Age;      //年龄
	string m_Lover; //情人
};

int main() {
	Person p;
	p.setName("亦宁");
	cout << "姓名：  " << p.getName() << endl;
	cout << "年龄：  " << p.getAge() << endl;
	p.setLover("无月");
	//cout << "情人：  " << p.setLover() << endl;  //只写属性，不可读取


	system("pause");
	return 0;
}