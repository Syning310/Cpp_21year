#include <iostream>
using namespace std;
//生活中家里有客厅（Public），有卧室（Private）
//客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
//但是，你也可以允许你的好闺蜜好基友进去

//在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
// 友元的目的就是让一个函数或者类 访问另一个类中的私有成员
// 关键字为：friend
// 友元的三种实现方法：1、全局函数做友元
//                     2、类做友元
//                     3、成员函数做友元

//建筑类
class Building {
	friend void goodGay(Building& building);  //把全局函数cv到类的最上方并在前加上关键字friend
	//意思是goodGay是 building的好朋友好基友，可以访问building的私有成员
public:  
	Building() {    //构造函数
		m_Sittingroom = "客厅";
		m_Bedroom = "卧室";
	}
public:
	string m_Sittingroom;  //客厅

private:
	string m_Bedroom;      //卧室
};

//全局函数
void goodGay(Building& building) {  //相当于Building* building = building;
	cout << "好基友全局函数 正在访问： " << building.m_Sittingroom << endl;

	cout << "好基友全局函数 正在访问： " << building.m_Bedroom<< endl;
}

void test01() {
	Building building;
	goodGay(building);
}
int main() {
	test01();

	system("pause");
	return 0;
}