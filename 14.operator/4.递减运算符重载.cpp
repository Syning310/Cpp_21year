#include <iostream>
using namespace std;

class Thumb {
	friend ostream& operator<< (ostream& cout, Thumb& b);
public:
	Thumb();
	Thumb& operator--();//前置递减运算符重载
	Thumb& operator--(int);//后置递减运算符重载
private:
	int m_A;
};
Thumb::Thumb() {
	m_A = 10;
}
ostream& operator<< (ostream& cout, Thumb& b) {
	cout << "m_A = " << b.m_A;
	return cout;
}
Thumb& Thumb::operator--() {  //前置递减运算符重载
	--m_A;
	return*this;
}
Thumb& Thumb::operator--(int) {  //this是谁调用这个函数它就指向谁；*this是解引用的意思
	Thumb temp = *this;  //先 记录自身数据
	m_A--;               //再 进行后置递减
	return *this;         //最后 返回结果
}

void test01() {
	Thumb b1;
	cout << --(--b1) <<endl;
	cout << b1 << endl;
}
void test02() {
	Thumb b2;
	cout << (b2--)-- << endl;
	cout << b2-- << endl;
}

int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}