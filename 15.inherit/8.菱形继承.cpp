#include <iostream>
using namespace std;


class Animal{
public:
	int m_Age;
};
//利用虚继承  解决菱形继承的问题
// 继承之前 加上关键字 virtual 变为虚继承
//而Animal就被称为虚基类
class Sheep : virtual public Animal{};  //虚继承：两个age只是继承了一个虚指针，而虚指针指向的是虚基类表中的同一个age
class Tou : virtual public Animal{};    //所以再继承下去就只剩一份age
class sheeptou : public Sheep, public Tou {

};

void test01() {
	sheeptou st;
	st.Sheep::m_Age = 18;
	st.Tou::m_Age = 20;
	//菱形继承时，两个父类拥有相同的数据，需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tou::m_Age = " << st.Tou::m_Age << endl;
	//这份数据只需一份即可，菱形继承导致数据有两份，资源浪费
	cout << "st.m_Age = " << st.m_Age << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}