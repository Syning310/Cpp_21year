#include<iostream>
using namespace std;



struct Student    //1������ѧ���Ľṹ��  ��ʱStudent�Գ�һ����������
{
	string name;  //����
	int age;      //����
	int score;    //����
};

int main() {
	//2������ѧ���Ľṹ�����
	struct Student s = { "�쳾", 18, 100 };

	//3��ͨ��ָ��ָ��ṹ�����
	Student* p = &s;    //��������Ҫ��ͬ���ܴ���ָ��


	//4��ͨ��ָ����ʽṹ������е�����

	p->name;  //  "->"  �ṹ����ʹ��ָ��Ҫ"p->"

	cout << "������  " << p->name << endl;
	cout << "���䣺  " << p->age << endl;
	cout << "�ɼ���  " << p->score << endl;

	system("pause");
	return 0;
} 