#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "����Ĺ��캯�����ã�" << endl;
	}
	~Base() {
		cout << "����������������ã�" << endl;
	}
};
class son : public Base {
public:
	son() {
		cout << "������Ĺ��캯�����ã�" << endl;
	}
	~son() {
		cout << "������������������ã�" << endl;
	}
};
void test01() {
	//Base b;
	son s;  //�̳��еĹ��������˳���ȹ��츸�࣬�ٹ������࣬���������࣬����������ࣻջ�����Ƚ����
}

int main() {
	test01();

	system("pause");
	return 0;
}