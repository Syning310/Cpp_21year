#include<iostream>
using namespace std;
//C++���еĳ�Ա����������һ����Ķ��󣬳�Ϊ �����Ա    ���磺
//class A {  }
//  class B 
// {
//     A a;   B�����ж���A�ĳ�Ա������A��Ϊ�����Ա
// }          //��ô������B����ʱ��A��B�Ĺ��������˳��˭��˭��

class phone {  
public:
	phone(string pName) {
		m_pName = pName;
		cout << "phone�Ĺ��캯������" << endl;
	}
	~phone() {
		cout << "phone��������������" << endl;
	}

	string m_pName;  //�ֻ�Ʒ��
};
class person {
public:                                    //phone m_phone = pName;  //��ʽת����
	person(string name, string pName) :m_Name(name),m_phone(pName)  
	{
		cout << "person�Ĺ��캯������" << endl;
	}
	~person() {
		cout << "person��������������" << endl;
	}
	string m_Name;  //�˵�����
	phone m_phone;  //�����Ա ��������Ķ�����Ϊ�����Ա��ʱ����ô�Ҵ��챾��Ķ����������ȹ�������Ա�Ķ���
	                //(���캯��˳�򣩵������������Ϊ�����Ա��ʱ�����ȹ�������Ա����ι�������
	                //(��������˳��)������˳���빹���෴��������������������������Ա
};

void test01() {
	person p("����", "ƻ��MAX Plues");  //���������ִ����ʱ��p�����ͷţ���ô�����ͷ�person�����ͷ�phone
	cout << p.m_Name << "����һ��" << p.m_phone.m_pName << "�ֻ�" << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}