#include<iostream>
using namespace std;
#include<vector>

//�ܽ᣺�����õ�������ȡvector�����е�Ԫ�أ�[]��atҲ����
//      front����������һ��Ԫ��       front��ǰ�棩
//      back�����������һ��Ԫ��      back��������

/*
  at(int idx);                     //��������idx��ָ������
  operator[];                      //��������idx��ָ������
  front();                         //���������е�һ������Ԫ��
  back();                          //�������������һ������Ԫ��
*/

void test01() {
	vector<int> v1;
	for (int i = 0; i < 6; i++) {
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++) {
	//operator[];                      //��������idx��ָ������
		cout << v1[i] << " ";
	}cout << endl;

	for (int i = 0; i < v1.size(); i++) {
		//at(int idx);                     //��������idx��ָ������
		cout << v1.at(i) << " ";
	}cout << endl;

	//front();                         //���������е�һ������Ԫ��
	cout << "��һ��Ԫ��Ϊ��  " << v1.front() << endl;

	//back();                          //�������������һ������Ԫ��
	cout << "���һ��Ԫ��Ϊ��  " << v1.back() << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}