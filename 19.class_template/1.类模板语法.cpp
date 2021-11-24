#include<iostream>
using namespace std;

//template       声明创建模板
// teypename     表明其后面的符号是一个数据类型，可以用class代替
// T             通用的数据类型，名称可以替换，通常为大写字母
//

template<typename NameType,typename AgeType>
class Person {
public:
	Person(NameType name,AgeType age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	void showPerson() {
		cout << "姓名：  " << this->m_Name << endl;
		cout << "年龄：  " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};
void test01() {  
	Person<string, int> p1("尚亦宁", 2000);  //< > 模板的参数列表，写在类型和类名的中间
	p1.showPerson();

}

int main() {
	test01();

	system("pause");
	return 0;
}