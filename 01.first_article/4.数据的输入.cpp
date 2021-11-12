#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main(){
	//1、整形
	int a = 0;
	cout << "请给整形变量赋值:" << endl;
	cin >> a;
	cout << "整形变量a = " << a << endl;
	
	//2、浮点型
	float b = 3.14f;
	cout << "请给浮点型变量赋值：" << endl;
	cin >> b;
	cout << "浮点型变量f = " << b << endl;
	
	//3、字符型
	char c = 'a';
	cout << "请给字符型变量c赋值：" << endl;
	cin >> c;
	cout << "字符型变量c = " << c << endl;

	//4、字符串型
	string d = "syning";
	cout << "请给字符串变量赋值：" << endl;
	cin >> d;
	cout << "字符串型变量d = " << d << endl;

	//5、布尔类型
	bool e = false;
	cout << "请给布尔类型赋值：" << endl;
	cin >> e;  //bool类型  只要是非0的值都为真
	cout << "布尔类型e = " << e << endl;


		

	system("pause");
	return 0;
}