#include<iostream>
using namespace std;


class Father {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class son : public Father {
public:
	int m_D;

};
void test01() {

	cout << "son所占用的内存空间：  " << sizeof(son) << endl;
	//父类中所有非静态成员都会被子类继承，父类中继承下来的私有成员，是被编译器隐藏了，所以访问不到，但确实继承下来了
}

int main() {
	test01();

	system("pause");
	return 0;
}