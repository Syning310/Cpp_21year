#include<iostream>
using namespace std;


//�ṹ�嶨��
struct Student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //�ɼ�
};

//�ṹ�������﷨
//struct student ������[ Ԫ�ظ��� ] = { {}, {}, ...{} };
int main() {
	//1�������ṹ������
	struct Student stuArray[3] =
	{
		{"С��", 21 ,100 },//2�����ṹ�������е�Ԫ�ظ�ֵ
		{"��ϣ", 23 ,150 },
		{"С��", 21 ,100 }
	};

	//���ڸ������е�����
	stuArray[2].name = "����";
	stuArray[2].age = 22;
	stuArray[2].score = 300;

	//4�������ṹ������
	for (int i = 0; i < 3; i++) {

		cout << "  ������  " << stuArray[i].name 
			 << "  ���䣺  " << stuArray[i].age 
			 << "  ������  " << stuArray[i].score << endl;
	};



	system("pause");
	return 0;
}