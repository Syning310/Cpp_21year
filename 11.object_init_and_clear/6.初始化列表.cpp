#include <iostream>
using namespace std;
//语法：构造函数()：属性1（值1），属性2（值2） ... {}

class person {
public:
	//传统初始化操作  创建构造函数顺便给属性赋值
	/*person(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}*/
	person(int q, int w ,int e) :m_A(q), m_B(w), m_C(e) {  //为灵活运用可以把值1，值2，替换成形参

	}

	int m_A;
	int m_B;
	int m_C;
};

void test01() {
	/*person p(10, 20, 30);*/
	person p2(100,200,300);  //调用构造函数初始化列表
	/*cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << "  m_C = " << p.m_C << endl;*/
	cout << "m_A = " << p2.m_A << "  m_B = " << p2.m_B << "  m_C = " << p2.m_C << endl;

}


int main() {
	test01();
    

	system("pause");
	return 0;
}