#include <iostream>
using namespace std;

//继承方式有三种：公共继承    保护继承    私有继承
// 父类中的私有内容，不管哪种继承方法，子类都无法访问
//1、公共继承：成员在父类中时，是公共权限继承到子类后，依然是公共权限；
//             成员在父类中时，是保护权限继承到子类后，依然是保护权限；
//             成员在父类中时，是私有权限继承到子类后，依然是私有权限；不可访问；在父类中是私有权限继承到子类依然不可访问
// 
//2、保护继承：成员在父类中时，是公共权限继承到子类后，变成保护权限；
//             成员在父类中时，是保护权限继承到子类后，依然是保护权限；
//             成员在父类中时，是私有权限继承到子类后，依然是私有权限；不可访问；在父类中是私有权限继承到子类依然不可访问
// 
//3、私有继承：成员在父类中时，是公共权限继承到子类后，变成私有权限；
//             成员在父类中时，是保护权限继承到子类后，变成私有权限；
//             成员在父类中时，是私有权限继承到子类后，依然是私有权限；不可访问；在父类中是私有权限继承到子类依然不可访问
// 
//

class Father1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son1 : public Father1 {
public:
	void func() {
		m_A = 10;  //父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;  //父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;  //父类中的私有权限成员 子类访问不到
	}
};
//保护继承
class Father2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son2 : protected Father2 {
public:
	void func() {
		m_A = 100;    //父类中公共成员 到子类中变为保护权限
		m_B = 100;    //父类中保护成员 到子类中依然保护权限
		//m_C = 100;  
	}
};
//私有继承
class Father3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son3 : private Father3 {
	void func() {
		m_A = 20;  //父类中公共成员，到子类中变为 私有权限
		m_B = 20;  //父类中保护成员，到子类中变为 私有权限
		//m_C = 20;  //父类中的私有权限成员 子类访问不到
	}
};
class grandson : public son3 {
public:
	void func() {
		//m_A = 1000;  //到了son3中 m_A变为私有，即使是儿子也是访问不到
		//m_B = 1000;  //m_B从Father3中继承给son3变为私有，私有内容继承给grandson中不可访问
	}
};


void test01() {
	son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;  //错误，保护权限类内可以访问，类外不可访问

	son2 s2;
	//s2.m_A = 1000;  //继承到son2中，变成了保护权限；保护权限类内可以访问，类外不可访问
	//s2.m_B = 1000;  //保护权限类内可以访问，类外不可访问

	son3 s3;
	//s3.m_A = 100;  //私有权限类外不可访问

}
int main() {



	system("pause");
	return 0;
}
