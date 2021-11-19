#include <iostream>
using namespace std;
//浅拷贝：简单的赋值拷贝操作  就是编译器提供的拷贝构造函数里的内容都是浅拷贝
//深拷贝：在堆区重新申请空间，进行拷贝操作
//如果属性有再堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

class person {
public:
	person() {
		cout << "person的默认构造函数调用" << endl;
	}
	person(int age ,int height) {
		m_Age = age;
		m_Height = new int(height);  
		cout << "person的有参构造函数调用" << endl;
	}
	//自己实现拷贝构造函数  解决浅拷贝带来的隐患
	person(const person& p) {
		cout << "person深拷贝函数的调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //编译器默认实现就是这行代码
	    //深拷贝操作

		m_Height = new int(*p.m_Height);  //手动开辟一个堆区，使两个指针不会交叉

	}

	~person() {
		//析构代码用途：  将堆区开辟数据做释放操作
		if (m_Height != NULL) {  //释放堆区数据
			delete m_Height;     //如果堆区数据不为空，那么释放堆区里的数据
			m_Height = NULL;     //防止出现野指针
		}
		cout << "person的析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test01() {
	//浅拷贝带来的问题：秉承现进后出的原则  p2拷贝构造先出后进行析构函数，将堆区里
	                  //而p1执行后也会执行析构函数，相当于执行了释放了两次堆区里的数据，所以会非法操作
	                  //浅拷贝的问题要利用深拷贝进行解决
	person p1(18, 189);    //先进后出，最后被析构函数释放
	cout << "p1的年龄为：  " << p1.m_Age << "  p1的身高为：  " << *p1.m_Height << endl;

	person p2(p1);  //后进先出，出来后会先被析构函数释放
	cout << "p2的年龄为：  " << p2.m_Age << "  p2的身高为：  " << *p2.m_Height << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}