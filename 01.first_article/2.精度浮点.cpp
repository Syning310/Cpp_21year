#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


int main()
{
	float a = 3.14f;
	double b = 3.14;
	

	//科学计数法 3e2  ----  3 * 10 ^ 2     e后面为正数是乘10的N次方
	//           3e-2 ----  3 * 0.1 ^ 2    e后面为负数是乘0.1的N次方

	float w = 3e2f;
	cout << "w=" << w << endl;
	
	system("pause");
	return 0;
}