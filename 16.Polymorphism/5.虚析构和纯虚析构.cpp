#include<iostream>
using namespace std;
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�������ʹ��������Ĺ��ԣ�
//1�����Խ������ָ���ͷ������������⣻
//2������Ҫ�о���ĺ���ʵ��
//�������ʹ�����������������Ǵ����������������ڳ����࣬�޷�ʵ��������
//������д�����麯��һ����������������Ҫ��������дʵ��

class Animal {
public:
	Animal() {
		cout << "Animal�Ĺ��캯������" << endl;
	}
	virtual void speak() = 0;  //���麯��

    //�������������Խ��������ָ���޷��ͷ������ж�����Ա������
	/*virtual ~Animal() {
		cout << "Animal��������������" << endl;
	}*/
	virtual ~Animal() = 0;  //������������Ҫ������Ҳ��Ҫһ�������ʵ��
	//��Ϊ������Ҳ�����ж�������������Ҫһ������ʵ��
	//���˴������������������Ҳ���ڳ����࣬�޷�ʵ��������
};
Animal::~Animal() {
    cout << "Animal�Ĵ�������������" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat�Ĺ��캯������" << endl;
		m_CatName = new string(name);
	}
	void speak() {
		cout << "Сè" << *m_CatName << "��˵��" << endl;
	}
	string* m_CatName;
	~Cat() {	
		if (m_CatName != NULL) {
            cout << "Cat��������������" << endl;
			delete m_CatName;
			m_CatName = NULL;
		}
	}
};
 
void test01() {
	Animal* ani = new Cat("Tom");
	ani->speak();
    //����ָ��������ʱ��������������������������������������ж������ԣ��޷����������������ڴ�й¶
	delete ani;
	

}

int main() {
	test01();

	system("pause");
	return 0;
}