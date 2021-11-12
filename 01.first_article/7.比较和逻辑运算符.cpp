#include <iostream>
using namespace std;
int main() {
	//比较运算符
	int a = 10;
	int b = 20;
	// == 相等于
	cout <<( a == b) << endl;
//
//	// ！= 不等于
//	cout << (a != b )<< endl;
//
//	// > 大于
//	cout << (a > b) << endl;
//
//	// < 小于
//	cout << (a < b) << endl;
//
//	// >= 大于等于
//	cout << (a >= b) << endl;
//
//	// <= 小于等于
//	cout << (a <= b) << endl;
//
	system("pause");
	return 0;
}

int main() {
	//逻辑运算符
	// ! 非         真变假，假变真
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	// && 与        同真为真，其余为假      两个条件都为真结果才为真
	int b = 0;
	int c = 20;
	cout << ( a && b ) << endl;
	cout << ( a && c ) << endl;

	// || 或        同假为假，其余为真      两个条件达到其中一个
	int q = 0;
	cout << ( a || b ) << endl;
	cout << ( a || q ) << endl;
	cout << ( b || q ) << endl;

	system("pause");
	return 0;
}
