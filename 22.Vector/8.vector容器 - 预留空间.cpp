#include<iostream>
using namespace std;
#include<vector>


//���ܣ�����vector�ڶ�̬��չ����ʱ��չ����
//����ԭ�ͣ�reserve(int len);    //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//reserve  ����  ����


void test01() {
	vector<int> v;
	v.reserve(100000);  

	int num = 0;  //ͳ�ƶ�̬��չ�Ĵ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);

		if (p != &v[0]) {    //��Ϊvectorÿһ�ζ�̬��չ��Ҫ�����µ��ڴ�ռ䣬����ԭ��������
			p = &v[0];       //���Դ�p��ÿһ��ָ��v���׵�ַ������vector��һ�ζ�̬��չ
			num++;
		}
	}
	cout << "num = " << num << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}