#include <iostream>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();

	void vist();  //ֻ��visit����building��˽�г�Ա
	void vist2(); //����visit2����building��˽�г�Ա 

	Building* bui;
};

class Building {
	//����friend��Ҫ���� :: ����Building�������ĸ����������µĳ�Ա����,����ᱻ����ȫ�ֺ���
	friend void GoodGay::vist();  //�Ѻû��ѳ�Ա����CV���û�����Ķ���
public:
	Building(); 
public:
	string m_Sittingroom;

private:
	string m_Bedroom;
};

//����ʵ�ֳ�Ա����Ҫ�� :: ��ʾĳ���������µ�ĳ��Ա����
Building::Building() {
	m_Sittingroom = "����";
	m_Bedroom = "����";
}
GoodGay::GoodGay() {  
	bui = new Building;  //�ڶ�������һ��Building������ָ��ָ������new�����Ķ���ֻ�ڶ���������ڳ������н������ͷ�
}
void GoodGay::vist() {
	cout << "visit �������ڷ��ʣ�  " << bui->m_Sittingroom << endl;
	cout << "visit �������ڷ��ʣ�  " << bui->m_Bedroom << endl;
}
void GoodGay::vist2() {
	cout << "visit2 �������ڷ��ʣ�  " << bui->m_Sittingroom << endl;
	//cout << "visit2 �������ڷ��ʣ�  " << bui->m_Bedroom << endl;
}
void test01() {
	GoodGay p;
	p.vist();
	p.vist2();
}

int main() {
	test01();


	system("pause");
	return 0;
}