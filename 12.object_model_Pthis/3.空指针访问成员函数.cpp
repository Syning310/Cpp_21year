#include <iostream>
using namespace std;
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����Ҳ��Ҫע����û���õ�thisָ�룬����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

class america {
public:
	void showClassName() {
		cout << "this is america" << endl;
	}
	void showamericaAge() {
		//m_Age ǰĬ�ϼ���this->��˼�ǵ�ǰ��������ԣ���tset01������һ����ָ�룬����thisҲ���һ����ָ��
		if (this == NULL) {  //�����д�����Լ�ǿ����Ľ�׳��
			return;
		}
		cout << "age = " << m_Age << endl;	
	}  //����ԭ�򣺴����ָ����NULL�����ԭ��Ӹ�if����

	int m_Age;
};

void test01() {
	america* p = NULL;

	p->showClassName();

	p->showamericaAge();
}
int main() {
	test01();


	system("pause");
	return 0;
}