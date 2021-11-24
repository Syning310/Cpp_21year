#include<iostream>
using namespace std;

//1、类模板没有自动类型推导的使用方式
//2、类模板在模板参数列表中可以有默认参数
                                
template<typename NameType, typename AgeType = int>  //2、类模板在模板参数列表中可以有默认参数
class Person {                                       //模板参数列表中可以给模板数据类型提前确定的数据类型
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_age = age;
	}
	void showPerson() {
		cout << "姓名：  " << this->m_Name << endl;
		cout << "年龄：  " << this->m_age << endl;
	}

	NameType m_Name;
	AgeType m_age;
};

void test01() {
	//Person p("尚亦宁", 2000);//错误！  //1、类模板没有自动类型推导的使用方式
	Person<string, int> p1("尚亦宁", 2000);  //只能用显示指定类型
	p1.showPerson();

	Person<string> p2("无月", 130000);  //只有类模板才可以提前默认参数
	p2.showPerson();
}


int main() {
	test01();


	system("pause");
	return 0;
}