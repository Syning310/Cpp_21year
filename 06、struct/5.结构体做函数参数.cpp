#include<iostream>
using namespace std;

//���ṹ����Ϊ�����뺯���д��ݣ���Ϊ���֣�
//ֵ���ݣ������β���θı䣬������ı�ʵ��
//��ַ���ݣ��βη����ı䣬ʵ��Ҳ����ŷ����ı�
struct girl
{
	string name;
	int age;
	int score;
	
};

//1��ֵ����
void printgirl1(girl z) {
	cout << "�Ӻ����д�ӡ    ������" << z.name << "  ���䣺" << z.age << "  �ɼ���" << z.score << endl;
}
//2����ַ����
void printgirl2(girl* p) {
	cout << "�Ӻ���2�д�ӡ  ������" << p->name << "  ���䣺" << p->age << "  �ɼ���" << p->score << endl;
}

int main() {
	//��girl���뵽һ�������У���ӡgirl���ϵ���Ϣ
	girl z;
	z.name = "�쳾";
	z.age = 22;
	z.score = 80;
    printgirl1(z);   //ֵ����
	printgirl2(&z);  //��ַ����
	cout << sizeof(girl) << endl;

	system("pause");
	return 0;
}