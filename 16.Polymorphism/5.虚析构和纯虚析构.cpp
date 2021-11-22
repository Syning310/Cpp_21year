#include<iostream>
using namespace std;
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//虚析构和纯虚析构的共性：
//1、可以解决父类指针释放子类对象的问题；
//2、都需要有具体的函数实现
//虚析构和纯虚析构的区别：如果是纯虚析构，该类属于抽象类，无法实例化对象
//虚析构写法和虚函数一样；纯虚析构则需要在类外书写实现

class Animal {
public:
	Animal() {
		cout << "Animal的构造函数调用" << endl;
	}
	virtual void speak() = 0;  //纯虚函数

    //利用虚析构可以解决，父类指针无法释放子类有堆区成员的问题
	/*virtual ~Animal() {
		cout << "Animal的析构函数调用" << endl;
	}*/
	virtual ~Animal() = 0;  //纯虚析构，需要声明，也需要一个具体的实现
	//因为父类中也可能有堆区对象，所以需要一个具体实现
	//有了纯虚析构函数后，这个类也属于抽象类，无法实例化对象
};
Animal::~Animal() {
    cout << "Animal的纯析构函数调用" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat的构造函数调用" << endl;
		m_CatName = new string(name);
	}
	void speak() {
		cout << "小猫" << *m_CatName << "在说话" << endl;
	}
	string* m_CatName;
	~Cat() {	
		if (m_CatName != NULL) {
            cout << "Cat的析构函数调用" << endl;
			delete m_CatName;
			m_CatName = NULL;
		}
	}
};
 
void test01() {
	Animal* ani = new Cat("Tom");
	ani->speak();
    //父类指针在析构时，不会调用子类的析构函数。导致子类中如果有堆区属性，无法进行析构，出现内存泄露
	delete ani;
	

}

int main() {
	test01();

	system("pause");
	return 0;
}