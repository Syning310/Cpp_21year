#include<iostream>
using namespace std;


//�ܽ᣺�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ�ʵ�����

//2������ѧ���Ľṹ��
struct student
{
	string name;
	int age;
	int score;
};

//1��������ʦ�ṹ��
struct teacher
{
	int id;        //��ʦ���
	string name;   //��ʦ����
	int age;       //��ʦ����
	struct student stu;  //�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ�ʵ�����
};

int main() {
	//3������ʦ�ṹ�帳ֵ
	struct teacher t;
	t.name = "����";
	t.id = 1546878513;
	t.age = 10000;
	t.stu.name = "�쳾";
	t.stu.age = 20;
	t.stu.score = 90;
	cout << "  ��ʦ��������  " << t.name << endl;
	cout << "  ��ʦ�ı�ţ�  " << t.id << endl;
	cout << "  ��ʦ�����䣺  " << t.age << endl;
	cout << "  ��ʦ��ѧ����  " << t.stu.name << endl;
	cout << "  ѧ�������䣺  " << t.stu.age << endl;
	cout << "  ѧ���ĳɼ���  " << t.stu.score << endl;

	system("pause");
	return 0;
}