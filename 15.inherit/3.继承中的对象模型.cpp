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

	cout << "son��ռ�õ��ڴ�ռ䣺  " << sizeof(son) << endl;
	//���������зǾ�̬��Ա���ᱻ����̳У������м̳�������˽�г�Ա���Ǳ������������ˣ����Է��ʲ�������ȷʵ�̳�������
}

int main() {
	test01();

	system("pause");
	return 0;
}