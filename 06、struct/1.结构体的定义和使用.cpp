#include<iostream>
using namespace std;

  //�ṹ��������ò����� " . "���ʳ�Ա

  //  1������ѧ����������  ��  ѧ�����������������䣬������

	
	//struct  �ṹ����  {�ṹ���Ա�б�};
struct Student    //�Զ�����������ͣ�����һЩ���ͼ�����ɵ�һ������
{
	//��Ա�б�

	string name;  //����	

	int age;      //����

	int score;    //����
}s3;  //˳�㴴���ṹ�����
	
	//2��ͨ��ѧ�����ʹ�������ѧ��	 
	//2.1 struct Student s1;
	
	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main() {
	
	//2.1 struct Student s1;    ��int a ����һ����������˼һ��
	struct Student s1;  //Ȼ���s1���Ը�ֵ,
	s1.name = "С��";
	s1.age = 21;
	s1.score = 80;

	cout << "  ������" << s1.name << "  ���䣺" << s1.age << "  ������" << s1.score << endl;


    //2.2 struct Student s2 = { ... } ;
	struct Student s2 = { "С��", 21, 100 };

	cout << "  ������" << s2.name << "  ���䣺" << s2.age << "  ������" << s2.score << endl;


	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "��ϣ";
	s3.age = 23;
	s3.score = 100;

	cout << "  ������" << s3.name << "  ���䣺" << s3.age << "  ������" << s3.score << endl;
	
	system("pause");
	return 0;
}