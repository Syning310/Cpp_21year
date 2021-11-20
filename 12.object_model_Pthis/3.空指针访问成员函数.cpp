#include <iostream>
using namespace std;
//C++中空指针也是可以调用成员函数的，但是也需要注意有没有用到this指针，如果用到this指针，需要加以判断保证代码的健壮性

class america {
public:
	void showClassName() {
		cout << "this is america" << endl;
	}
	void showamericaAge() {
		//m_Age 前默认加了this->意思是当前对象的属性，而tset01创建了一个空指针，导致this也变成一个空指针
		if (this == NULL) {  //加这行代码可以加强代码的健壮性
			return;
		}
		cout << "age = " << m_Age << endl;	
	}  //报错原因：传入的指针是NULL，解决原因加个if条件

	int m_Age;
};

void test01() {
	america* p = NULL;

	p->showClassName();

	p->showamericaAge();
}
int main() {
	test01();


	system("pause");
	return 0;
}