#include <iostream>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();

	void vist();  //只让visit访问building的私有成员
	void vist2(); //不让visit2访问building的私有成员 

	Building* bui;
};

class Building {
	//加上friend后还要加上 :: 告诉Building类这是哪个类作用域下的成员函数,否则会被当成全局函数
	friend void GoodGay::vist();  //把好基友成员函数CV到好基友类的顶行
public:
	Building(); 
public:
	string m_Sittingroom;

private:
	string m_Bedroom;
};

//类外实现成员函数要加 :: 表示某类作用域下的某成员函数
Building::Building() {
	m_Sittingroom = "客厅";
	m_Bedroom = "卧室";
}
GoodGay::GoodGay() {  
	bui = new Building;  //在堆区创建一个Building，并用指针指向它；new创建的对象只在堆区里，堆区在程序运行结束后释放
}
void GoodGay::vist() {
	cout << "visit 函数正在访问：  " << bui->m_Sittingroom << endl;
	cout << "visit 函数正在访问：  " << bui->m_Bedroom << endl;
}
void GoodGay::vist2() {
	cout << "visit2 函数正在访问：  " << bui->m_Sittingroom << endl;
	//cout << "visit2 函数正在访问：  " << bui->m_Bedroom << endl;
}
void test01() {
	GoodGay p;
	p.vist();
	p.vist2();
}

int main() {
	test01();


	system("pause");
	return 0;
}