#include<iostream>
using namespace std;
#include<vector>  //STL�е�ÿ��������ʹ�õ�ʱ��Ҫ��������ͷ�ļ�
#include<algorithm>  //��׼�㷨��ͷ�ļ� ���� ����Ҫ

//������  vector
//�㷨��  for_each
//��������  vector<int>::iterator


void myprint(int val) {
	cout << val << endl;
}


void test01() {
	//vector �������Ϊ���飻
	vector<int> v;  //������һ��vector����

	
	v.push_back(10);//�������в�������  //β�巨
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//ͨ�������������������е�����
	//vector<int>::iterator itBegin = v.begin();  //��ʼ������  ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();      //����������  ָ�����������һ��Ԫ�ص���һ��λ��

	////��һ�ֱ�����ʽ��
	//while (itBegin != itEnd) {
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ�����ʽ  //���������Щ����д��һ��forѭ����
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	//                     ��ʼ״̬            ѭ������       ����
		cout << *it << endl;
	}

	//�����ֱ�����ʽ  ����STL�ṩ�����㷨
	for_each(v.begin(), v.end(), myprint);

}

int main() {
	test01();

	system("pause");
	return 0;
}