#include <iostream>
using namespace std;


class Animal{
public:
	int m_Age;
};
//������̳�  ������μ̳е�����
// �̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//��Animal�ͱ���Ϊ�����
class Sheep : virtual public Animal{};  //��̳У�����ageֻ�Ǽ̳���һ����ָ�룬����ָ��ָ������������е�ͬһ��age
class Tou : virtual public Animal{};    //�����ټ̳���ȥ��ֻʣһ��age
class sheeptou : public Sheep, public Tou {

};

void test01() {
	sheeptou st;
	st.Sheep::m_Age = 18;
	st.Tou::m_Age = 20;
	//���μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tou::m_Age = " << st.Tou::m_Age << endl;
	//�������ֻ��һ�ݼ��ɣ����μ̳е������������ݣ���Դ�˷�
	cout << "st.m_Age = " << st.m_Age << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}