#include<iostream>
using namespace std;

struct wife {
	string name;
	int age;
	int appearance;
};

void printWife(const wife * a) {  //����const֮��ֻ�ܶ������ܸ�
	//a->age = 4500;  �β��м���const֮��һ�����޸ľͻᱨ�����Է�ֹ�����
	cout << "������" << a->name << "  ���䣺" << a->age << "  ��ò��" << a->appearance << endl;
}
int main() {
	wife z = { "��",4000,100 };
	//ʹ�ú�����ӡ�ṹ����Ϣ
	printWife(&z);

	cout << z.age << endl;
	system("pause");
	return 0;
}