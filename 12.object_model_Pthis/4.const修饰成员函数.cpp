#include<iostream>
using namespace std;
//��������1����Ա������const֮���Ϊ������
//        2���������ڲ������޸ĳ�Ա����
//        3����Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
//������1����������ǰ��const��Ϊ������
//        2��������ֻ�ܵ��ó�����

class america {
public:
	//������    const showAmerica * const this  ǰ���const����һ�к��������const
	void showAmerica() const    //�ڳ�Ա�����������const�����ε���thisָ����ָ���ֵҲ�������޸�
	{   //thisָ��ı���ʱ  ָ�볣��  �ص���ָ���ָ���ǲ������޸ĵ�
		//this->m_A = 200;	//�������ڲ������޸ĳ�Ա����
	}

	void func() const{
		m_B = 1000;
	}
	void func2(){}
	int m_A;
	mutable int m_B;  //�����������ʹ�ڳ������У�Ҳ���޸����ֵ  mutable���ɱ䣩
};

void test01() {
	america a1;
	a1.showAmerica();
	a1.func();
}

void test02() {
	//������
	const america a2;  //1���ڶ���ǰ��const��Ϊ������
	//a2.m_A = 100;  //���󣬳�������Ҳ�������޸�����
	a2.m_B = 50000;  //m_B��Ϊ����mutable�����Բ����ڳ������£����ǳ������ﶼ�����޸�
	//2��������ֻ�ܵ��ó�����
	a2.func();
	//a2.func2();//����,������ֻ�ܵ��ó�����;��Ϊ��ͨ��Ա���������޸�����
}
int main() {

	test02();

	system("pause");
	return 0;
}