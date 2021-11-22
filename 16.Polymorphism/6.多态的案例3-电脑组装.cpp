#include<iostream>
using namespace std;

//零件类
class CPU {public:
	virtual void calculate() = 0;  //抽象计算函数
};
class VideoCard {public:
	virtual void display() = 0;    //抽象显示函数
};
class Memory {public:
	virtual void storage() = 0;    //抽象存储函数 
};
//电脑类
class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作函数
	void Work() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数来释放3个电脑零件
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
	CPU* m_cpu;               //CPU的零件指针
	VideoCard* m_vc;          //显卡的零件指针
	Memory* m_mem;            //内存条的零件指针
};

//具体厂商
//Intel厂商
class IntelCPU : public CPU {
public:
	void calculate() {
		cout << "Intel的CPU开始计算" << endl;
	}
}; 
class IntelVideoCard : public VideoCard {
public:
	void display() {
		cout << "Intel的显卡开始工作" << endl;
	}
};
class IntelMemory : public Memory {
public:
	void storage() {
		cout << "Intel的内存条开始存储" << endl;
	}
};
//lenovo厂商
class LenovoCPU : public CPU {
public:
	void calculate() {
		cout << "Lenovo的CPU开始计算" << endl;
	}
};
class LenovoVideoCard : public VideoCard {
public:
	void display() {
		cout << "Lenovo的显卡开始工作" << endl;
	}
};
class LenovoMemory : public Memory {
public:
	void storage() {
		cout << "Lenovo的内存条开始存储" << endl;
	}
};

void test01() {
	//第一台电脑零件
	cout << "第一台电脑" << endl;
	CPU* intelcpu = new IntelCPU;               //父类指针指向子类
	VideoCard* intelcard = new IntelVideoCard;  //父类指针指向子类
	Memory* intelmem = new IntelMemory;         //父类指针指向子类
	//创建第一台电脑
	Computer* computer1 = new Computer(intelcpu, intelcard, intelmem);
	computer1->Work();
	delete computer1;
	cout << "-------------------------" << endl;
	cout << "第二台电脑" << endl;
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->Work();
	delete computer2;
	cout << "-------------------------" << endl;
	cout << "第三台电脑" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->Work();
	delete computer3;
}

int main() {
	test01();

	system("pause");
	return 0;
}