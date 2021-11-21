#include<iostream>
using namespace std;
//类做友元特点是，整个类中的函数都可以访问朋友类的私有内容

class Building;
class GoodGay {
public:
	GoodGay();
	void visit();  //参观函数，访问Building中的属性

	Building* building;
};

class Building {
	friend class GoodGay;  //GoodGay类是本类的好朋友，可以访问本类中的私有成员
public:
	Building();
public:
	string m_Sittingroom;  //客厅
private:
	string m_Bedroom;      //卧室
};
//类外写成员函数
Building::Building() {  //在类外需要加上作用域，告诉编译器这是Building作用域下的构造函数
		m_Sittingroom = "客厅";
		m_Bedroom = "卧室";
}
GoodGay::GoodGay() {
	//创建一个建筑物的对象
	building = new Building;  //相当于Building* building = new Building;在堆区    指针指向的是堆区
}
void GoodGay::visit() {
	cout << "好基友正在访问：  " << building->m_Sittingroom << endl;

	cout << "好基友正在访问：  " << building->m_Bedroom << endl;

}

//堆区没释放，程序结束也会释放
void test01() {
	GoodGay gg;
	gg.visit();
}
int main() {
	test01();


	system("pause");
	return 0;
}