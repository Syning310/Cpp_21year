#include<iostream>
using namespace std;

//�¼���ĳ�Ա����ӵ����һ����Ĺ��ԣ������Լ�������
//�������ǿ����ܶ���վ�У����й�����ͷ���������ĵײ�����������������б�ֻ�����ĵĺ������ݲ�ͬ

//�̳еĺô��������ظ��Ĵ���
// class A : public B;
// A���Ϊ���� �� ������
// B���Ϊ���� �� ����
// �������еĳ�Ա���������󲿷֣�һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա
// �ӻ���̳й����ı����乲�ԣ��������ĳ�Ա�����������


////��ͨʵ��ҳ��
////javaҳ��
class Java {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left() {
		cout << "Java��Python��C++...�����������б�" << endl;
	}
	void content() {  //����
		cout << "Javeѧ����Ƶ" << endl;
	}
};
 //Python
class Python {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left() {
		cout << "Java��Python��C++...�����������б�" << endl;
	}
	void content() {  //����
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
// C++
class CPP {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left() {
		cout << "Java��Python��C++...�����������б�" << endl;
	}
	void content() {  //����
		cout << "C++ѧ����Ƶ" << endl;
	}
};


//�̳��﷨�� class ���� : �̳з�ʽ ����
// ����Ҳ��Ϊ ������
// ����Ҳ��Ϊ ����
//�̳�ʵ��ҳ��
class BasePage  //(��ҳ) 
{
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left() {
		cout << "Java��Python��C++...�����������б�" << endl;
	}	
};
//Javaҳ��
class Java : public BasePage  //�̳���д�﷨
{
public:
	void content() {
		cout << "Javaѧ����Ƶ:" << endl;
	}
};
//Pythonҳ��
class Python : public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ:" << endl;
	}
};
//C++ҳ��
class CPP : public BasePage {
public:
	void content() {
		cout << "C++ѧ����Ƶ:" << endl;
	}
};

void test01() {
	Java ja;
	cout << "Java������Ƶ����:  " << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "��������������������������������������������������������������������������������������������������������" << endl;
	Python py;
	cout << "Python������Ƶ����:  " << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "��������������������������������������������������������������������������������������������������������" << endl;
	CPP c;
	cout << "C++������Ƶ����:  " << endl;
	c.header();
	c.footer();
	c.left();
	c.content();
}
int main() {
	test01();  
	
	system("pause");
	return 0;
}