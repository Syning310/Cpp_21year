#include<iostream>
using namespace std;
//������Ԫ�ص��ǣ��������еĺ��������Է����������˽������

class Building;
class GoodGay {
public:
	GoodGay();
	void visit();  //�ιۺ���������Building�е�����

	Building* building;
};

class Building {
	friend class GoodGay;  //GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
public:
	Building();
public:
	string m_Sittingroom;  //����
private:
	string m_Bedroom;      //����
};
//����д��Ա����
Building::Building() {  //��������Ҫ���������򣬸��߱���������Building�������µĹ��캯��
		m_Sittingroom = "����";
		m_Bedroom = "����";
}
GoodGay::GoodGay() {
	//����һ��������Ķ���
	building = new Building;  //�൱��Building* building = new Building;�ڶ���    ָ��ָ����Ƕ���
}
void GoodGay::visit() {
	cout << "�û������ڷ��ʣ�  " << building->m_Sittingroom << endl;

	cout << "�û������ڷ��ʣ�  " << building->m_Bedroom << endl;

}

//����û�ͷţ��������Ҳ���ͷ�
void test01() {
	GoodGay gg;
	gg.visit();
}
int main() {
	test01();


	system("pause");
	return 0;
}