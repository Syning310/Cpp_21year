#include <iostream>
using namespace std;
//�����м����п�����Public���������ң�Private��
//�����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
//���ǣ���Ҳ����������ĺù��ۺû��ѽ�ȥ

//�ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
// ��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա
// �ؼ���Ϊ��friend
// ��Ԫ������ʵ�ַ�����1��ȫ�ֺ�������Ԫ
//                     2��������Ԫ
//                     3����Ա��������Ԫ

//������
class Building {
	friend void goodGay(Building& building);  //��ȫ�ֺ���cv��������Ϸ�����ǰ���Ϲؼ���friend
	//��˼��goodGay�� building�ĺ����Ѻû��ѣ����Է���building��˽�г�Ա
public:  
	Building() {    //���캯��
		m_Sittingroom = "����";
		m_Bedroom = "����";
	}
public:
	string m_Sittingroom;  //����

private:
	string m_Bedroom;      //����
};

//ȫ�ֺ���
void goodGay(Building& building) {  //�൱��Building* building = building;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << building.m_Sittingroom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << building.m_Bedroom<< endl;
}

void test01() {
	Building building;
	goodGay(building);
}
int main() {
	test01();

	system("pause");
	return 0;
}