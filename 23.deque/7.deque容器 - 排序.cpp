#include<iostream>
using namespace std;
#include<deque>
#include<algorithm> //��׼�㷨��ͷ�ļ�

//�㷨��  sort(iterator beg, iterator end);         //��beg��end�����ڵ�Ԫ�ؽ�������
//����  Ĭ���������  ��С����  ����
//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
//vector����Ҳ�������� sort��������


void test01() {
	deque<int> d;
	d.push_back(10);
	d.push_back(15);
	d.push_back(20);
	d.push_front(30);
	d.push_front(25);
	d.push_front(0);
	cout << "����ǰ��  " << endl;
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;
	cout << "�����  " << endl;

	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}