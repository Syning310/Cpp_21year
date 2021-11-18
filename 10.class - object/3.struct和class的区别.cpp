#include<iostream>
using namespace std;

//在C++中 struct 和 class 唯一的区别就在于 默认的访问权限不同
//struct 默认权限为公共
//class  默认权限为私有

class S1 {
	string Name;  //默认权限 是私有权限
};

struct S2 {
	string Name;  //默认权限 是公共权限
    
	int a;
	int b;
	int S() {  //求长方形的面积
		return a * b;
	}
};


int main() {
	S1 c1;
	//c1.Name;  //默认权限是私有，所以无法访问

	S2 c2;
	c2.Name = "长方形";  //默认权限是公共，所以可以访问
	c2.a = 5;
	c2.b = 10;
	cout << c2.S() << endl;

	system("pause");
	return 0;
}