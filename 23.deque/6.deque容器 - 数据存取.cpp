#include<iostream>
using namespace std;
#include<deque>

/*
  �����õ�������ȡdeque�����е�Ԫ�أ�[]��atҲ����
  ����ԭ�ͣ� 
  at(int idx);                              //��������idx��ָ������
  operator[];                               //��������idx��ָ������
  front();                                  //���������е�һ������Ԫ��
  back();                                   //�������������һ������Ԫ��
*/

void test01() {
	deque<int> d;
	d.push_back(0);
	d.push_back(10);
	d.push_back(20);
	d.push_front(10);
	d.push_front(20);

	//2��operator[];                               //��������idx��ָ������
	//ͨ��[]��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;

	//1��at(int idx);                              //��������idx��ָ������
	cout << "Ԫ���±�Ϊ2��Ϊ��  " << d.at(2) << endl;  //����������ָ������

	//3��front();                                  //���������е�һ������Ԫ��
	cout << "��һ��Ԫ��Ϊ��  " << d.front() << endl;

	//4��back();                                   //�������������һ������Ԫ��
	cout << "���һ��Ԫ��Ϊ��  " << d.front() << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}