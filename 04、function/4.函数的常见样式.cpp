#include<iostream>;
using namespace std;




//1���޲��޷�  2���в��޷�  3���޲��з�  4���в��з�

  //1���޲��޷�
void test01() {
	cout << "this is test01 " << endl;
}

  //2���в��޷�
void test02(int a ) {
	cout << "this is test02 a = " << a << endl;

}

  //3���޲��з�
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}

  //4���в��з�
int test04(int q) {
	cout << "this is test04 q = " << q << endl;
	return q;
}


int main() {
	//1���޲��޷��ĺ�������
	test01();

	//2���в��޷��ĺ�������
	test02(100);

	//3���޲��з��ĺ�������
	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	//4���в��з��ĺ�������
	int num2 = test04(360);
	cout << "num2 = " << num2 << endl;


	system("pause");
	return 0;
}