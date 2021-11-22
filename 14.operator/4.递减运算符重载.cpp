#include <iostream>
using namespace std;

class Thumb {
	friend ostream& operator<< (ostream& cout, Thumb& b);
public:
	Thumb();
	Thumb& operator--();//ǰ�õݼ����������
	Thumb& operator--(int);//���õݼ����������
private:
	int m_A;
};
Thumb::Thumb() {
	m_A = 10;
}
ostream& operator<< (ostream& cout, Thumb& b) {
	cout << "m_A = " << b.m_A;
	return cout;
}
Thumb& Thumb::operator--() {  //ǰ�õݼ����������
	--m_A;
	return*this;
}
Thumb& Thumb::operator--(int) {  //this��˭���������������ָ��˭��*this�ǽ����õ���˼
	Thumb temp = *this;  //�� ��¼��������
	m_A--;               //�� ���к��õݼ�
	return *this;         //��� ���ؽ��
}

void test01() {
	Thumb b1;
	cout << --(--b1) <<endl;
	cout << b1 << endl;
}
void test02() {
	Thumb b2;
	cout << (b2--)-- << endl;
	cout << b2-- << endl;
}

int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}