#include<iostream>
using namespace std;

const double PI = 3.14;  //Բ����

//���һ��Բ�ࣨclass������Բ���ܳ�
//��԰���ܳ�����ʽ��2 * PI * ���

//class�������һ���࣬���������ŵľ����������

class circle  //Բ��
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	int m_r;  //�뾶

	//��Ϊ  ��ȡԲ���ܳ�      ��Ϊ�ڴ�����ͨ������д����
	double calculateZC() {
		return 2 * PI * m_r;
	}

};



int main() {
	//ͨ��Բ��  ���������Բ������
	circle c1;  //ʵ���� ���� ͨ��һ���࣬������һ������Ĺ��̽�ʵ����
	//��Բ����  �����Խ��и�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��  " << c1.calculateZC() << endl;

	system("pause");
	return 0;
}


//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧУ
class student
{
public:
	//����
	string m_name;  //����
	int m_id;  //ѧ��
	string school;  //ѧУ
	
	//��Ϊ
	void setstudent(string name, int id,string school = "�����ѧ") {  //��ӡѧ��������ѧ�ţ�ѧУ
		cout << "���� �� " << name << endl;
		cout << "ѧ�� �� " << id << endl;
		cout << "ѧУ �� " << school << endl;
	}

};

int main() {
	student s1;
	s1.setstudent("�쳾", 22250);


	system("pause");
	return 0;
}


class student {
public:

	//��Ŀ�е����Ժ���Ϊ��ͳһ��Ϊ��Ա
	//���ԡ�����Ա����  ��Ա����
	//��Ϊ������Ա����  ��Ա����
	

	//����
	string Name;
	int ID;
	//��Ϊ  ��ʾ������ѧ��
	void showstudent() {
		cout << "���� �� " << Name << "    "
		     << "ѧ�� �� " << ID << endl;
	}
	//������Ϊ��������ֵ
	void setname(string name) {
		Name = name;
	}
	void setid(int id) {
		ID = id;
	}
};

int main() {
	student S3;
	S3.setname("����");
	S3.setid(4545131);
	S3.showstudent();
	student S4;
	S4.setname("��ϣ");
	S4.setid(666666);
	S4.showstudent();
	
	student S1;
	S1.Name = "�쳾";
	S1.ID = 10000;
	S1.showstudent();
	student S2;
	S2.Name = "����";
	S2.ID = 56990372;
	S2.showstudent();
	
	


	system("pause");
	return 0;
}