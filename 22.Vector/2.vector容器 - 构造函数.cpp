#include<iostream>
using namespace std;
#include<vector>

//vector�����ĵ�������֧��������ʵĵ�����

/*
  vector<T> V;                          //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
  vector(v.begin(), v.end());           //��v[begin(), end()]�����е�Ԫ�ؿ���������
  vector(n, elem);                      //���캯����n��elem����������         elem ���� Ԫ��
  vector(const vector& vec);            //�������캯��
*/


void printVector(vector<int>& vec) {    //vector<int>::iterator��һ�������������԰������Ϊһ��ָ������
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	//1��vector<T> V;                          //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//2��vector(v.begin(), v.end());           //��v[begin(), end()]�����е�Ԫ�ؿ���������
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);


	//3��vector(n, elem);                      //���캯����n��elem����������         elem ���� Ԫ��
	vector<int> v3(6, 6);
	printVector(v3);

	//4��vector(const vector& vec);            //�������캯��
	vector<int> v4(v3);
	printVector(v4);
}

int main() {
	test01();

	system("pause");
	return 0;
}