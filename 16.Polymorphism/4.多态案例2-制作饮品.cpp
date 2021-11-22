#include <iostream>
using namespace std;

class MakeDrink {
public:
	virtual void Boli() = 0;  //煮水
	virtual void Brew() = 0;  //冲泡
	virtual void PourInCup() = 0;  //倒入杯中
	virtual void PutSomething() = 0;  //加入辅料
	void makeDrink()  //制作饮品
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
		cout << "煮矿泉水" << endl;
	}
	void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};
class Tea : public MakeDrink {
public:
	void Boli() {
		cout << "煮矿泉水" << endl;
	}
	void Brew() {
		cout << "冲泡茶叶" << endl;
	}
	void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	void PutSomething() {
		cout << "加入柠檬" << endl;
	}
};

//制作工程函数
void doWork(MakeDrink* a) {  //MakeDrink* a = new Coffee;
	a->makeDrink();  //多态：一个接口有多种形态
	
	delete a;  //堆区数据手动开辟，手动释放
}

void test01() {
	//制作咖啡
	doWork(new Coffee);
	cout << "-----------------" << endl;
	doWork(new Tea);

}
int main() {
	test01();

	system("pause");
	return 0;
}