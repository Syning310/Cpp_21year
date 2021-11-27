#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

/*
  template<typename T> bool logical_and<T>         //�߼���    ����ͬʱΪ�棬��Ϊ�棬�������Ϊ��
  template<typename T> bool logical_or<T>          //�߼���    ����ͬʱΪ�٣���Ϊ�٣������һ��Ϊ�漴Ϊ��
  template<typename T> bool logical_not<T>         //�߼���    ȡ�������٣��ٱ���
*/

void test01() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//�����߼���  ������v���˵�����v2��  ��ִ��ȡ������
	vector<bool> v2;
	v2.resize(v.size());  //����ǰ�����ȿ��ٿռ䣬��Ȼ�޷�����

	//template<typename T> bool logical_not<T>         //�߼���    ȡ�������٣��ٱ���
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator i = v2.begin(); i != v2.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//transform()�ǰ�����v���˵�����v2���㷨�������б��е�һ���ṩԭ������ʼ���������ڶ�������������
	//�������ṩ����Ŀ����������ʼ�����������һ���Ƿº���

}

int main() {
	test01();

	system("pause");
	return 0;
}