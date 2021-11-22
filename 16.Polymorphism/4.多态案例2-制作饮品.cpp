#include <iostream>
using namespace std;

class MakeDrink {
public:
	virtual void Boli() = 0;  //��ˮ
	virtual void Brew() = 0;  //����
	virtual void PourInCup() = 0;  //���뱭��
	virtual void PutSomething() = 0;  //���븨��
	void makeDrink()  //������Ʒ
	{    
		Boli();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee : public MakeDrink {
public:
	void Boli() {
		cout << "���Ȫˮ" << endl;
	}
	void Brew() {
		cout << "���ݿ���" << endl;
	}
	void PourInCup() {
		cout << "���뱭��" << endl;
	}
	void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}
};
class Tea : public MakeDrink {
public:
	void Boli() {
		cout << "���Ȫˮ" << endl;
	}
	void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}
	void PourInCup() {
		cout << "���뱭��" << endl;
	}
	void PutSomething() {
		cout << "��������" << endl;
	}
};

//�������̺���
void doWork(MakeDrink* a) {  //MakeDrink* a = new Coffee;
	a->makeDrink();  //��̬��һ���ӿ��ж�����̬
	
	delete a;  //���������ֶ����٣��ֶ��ͷ�
}

void test01() {
	//��������
	doWork(new Coffee);
	cout << "-----------------" << endl;
	doWork(new Tea);

}
int main() {
	test01();

	system("pause");
	return 0;
}