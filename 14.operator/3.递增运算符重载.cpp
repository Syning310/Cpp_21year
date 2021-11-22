#include <iostream>
using namespace std;
//递增运算符是 " ++ "
//重载递增运算符有两种：1、前置递增运算符；2、后置递增运算符
//左移运算符重载不要写在成员函数中，递增运算符重载可以写在成员函数中

class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger m);
public:
	MyInteger();
	//1、重载前置递增运算符
	MyInteger& operator++() {  //返回引用是为了一直对一个数据进行递增操作
		++m_A;  //先进行++运算
		return* this;  //再返回自身
	}
    //2、重载后置递增运算符
	MyInteger operator++(int) {  //int 代表的是占位参数，用于函数重载，区分前置递增和后置递增
		MyInteger temp = *this;  //先 记录当前结果
		m_A++;                  //再 进行后置递增操作
		return temp;             //最后 将结果返回
	}

private:
	int m_A;
};
  MyInteger::MyInteger() {
	m_A = 0;
}
  ostream& operator<<(ostream& cout, MyInteger m) {  //重载左移运算符,书写在全局函数中
	  cout << m.m_A;
	  return cout;
  }

  //前置递增
  void test01() {
	  MyInteger myint;
	  cout << ++(++myint) << endl;
	  cout << myint << endl;
  }
  //后置递增
  void test02() {
	  MyInteger myint1;
	  cout << myint1++ << endl;
	  cout << myint1 << endl;
	  //这个函数的代码相当于：
	  //int a = 0;
	  //cout << a++ << endl;  //0
	  //cout << a << endl;    //1
  }

int main() {
	//test01();
	test02();


	//int a = 10;
    //如果是，++写在前面： ++a：
	//cout << ++a << endl; //11
	//cout << a << endl;   //11
	//前置递增是先做递增操作，再做表达式

	//如果是，++写在后面： a++：
	//cout << a++ << endl;  //10
	//cout << a << endl;    //11
	//后置递增是先做表达式，在做递增操作

	system("pause");
	return 0;
}