#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


int main()
{
	float a = 3.14f;
	double b = 3.14;
	

	//��ѧ������ 3e2  ----  3 * 10 ^ 2     e����Ϊ�����ǳ�10��N�η�
	//           3e-2 ----  3 * 0.1 ^ 2    e����Ϊ�����ǳ�0.1��N�η�

	float w = 3e2f;
	cout << "w=" << w << endl;
	
	system("pause");
	return 0;
}