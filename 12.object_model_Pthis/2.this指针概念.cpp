#include<iostream>
using namespace std;
//ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ����룻��ô��һ���������������ĸ���������Լ���
//C++ͨ���ṩ����Ķ���ָ�룬thisָ�룬����������⡣thisָ��ָ�򱻵��õĳ�Ա���������Ķ���˭��������ôthis��ָ��˭��
//thisָ��������ÿһ���Ǿ�̬�ĳ�Ա�����ڣ�����Ҫ���壬ֱ��ʹ�ü���
//��;��1�����βκͳ�Ա����ͬ��ʱ��������thisָ�������֣�2������ķǾ�̬��Ա�����з��ض�������ʹ��return *this

class america {
public:
	america(int age) {
		this->age = age;       //���Ҫ��ֵ�����Ժ��β�һ������this-> ������
	}                          //thisָ����Ǳ����õĳ�Ա���������Ķ��������thisָ�����a1
	america& americaAddamerica(america& a) {  //����βε���˼��america& a = �����ʵ��
		this->age += a.age;  //�����������ϴ�����������
		return *this;  //this��ָ��a3��ָ�룬��*thisָ��ľ���p2���������
	}
	//���û�м�&��ô����ֵ���أ�����ÿ������캯��һ���µ����ݣ�������&����һֱ����a3����

	int age;
};
//1��������Ƴ�ͻ
void test01() {
	america a1(200);
	cout << "a1������Ϊ��  " << a1.age << endl;
}
//2�����ض�������return*this
void test02() {
	america a2(1000);
	america a3(6000);
	//��Ϊ����������֮��return��a3�ı�������+=֮�����ú����Ĵ�������a3�����Կ��Լ�������"."����
	a3.americaAddamerica(a2).americaAddamerica(a2).americaAddamerica(a2).americaAddamerica(a2);//��ʽ���˼��
	
	cout << "a3������Ϊ��  " << a3.age << endl;
	
}
int main() {
	//test01();
	test02();


	system("pause");
	return 0;
}