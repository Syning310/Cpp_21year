#include<iostream>
using namespace std;

//�����
class CPU {public:
	virtual void calculate() = 0;  //������㺯��
};
class VideoCard {public:
	virtual void display() = 0;    //������ʾ����
};
class Memory {public:
	virtual void storage() = 0;    //����洢���� 
};
//������
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ��������
	void Work() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ�����������ͷ�3���������
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;               //CPU�����ָ��
	VideoCard* m_vc;          //�Կ������ָ��
	Memory* m_mem;            //�ڴ��������ָ��
};

//���峧��
//Intel����
class IntelCPU : public CPU {
public:
	void calculate() {
		cout << "Intel��CPU��ʼ����" << endl;
	}
}; 
class IntelVideoCard : public VideoCard {
public:
	void display() {
		cout << "Intel���Կ���ʼ����" << endl;
	}
};
class IntelMemory : public Memory {
public:
	void storage() {
		cout << "Intel���ڴ�����ʼ�洢" << endl;
	}
};
//lenovo����
class LenovoCPU : public CPU {
public:
	void calculate() {
		cout << "Lenovo��CPU��ʼ����" << endl;
	}
};
class LenovoVideoCard : public VideoCard {
public:
	void display() {
		cout << "Lenovo���Կ���ʼ����" << endl;
	}
};
class LenovoMemory : public Memory {
public:
	void storage() {
		cout << "Lenovo���ڴ�����ʼ�洢" << endl;
	}
};

void test01() {
	//��һ̨�������
	cout << "��һ̨����" << endl;
	CPU* intelcpu = new IntelCPU;               //����ָ��ָ������
	VideoCard* intelcard = new IntelVideoCard;  //����ָ��ָ������
	Memory* intelmem = new IntelMemory;         //����ָ��ָ������
	//������һ̨����
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmem);
	computer1->Work();
	delete computer1;
	cout << "-------------------------" << endl;
	cout << "�ڶ�̨����" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;
	cout << "-------------------------" << endl;
	cout << "����̨����" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->Work();
	delete computer3;
}

int main() {
	test01();

	system("pause");
	return 0;
}