#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

/*
  ���������㷨����С���㷨��ʹ��ʱ����ͷ�ļ�#include<numeric>
    accumulate   ����  ��������Ԫ���ۼ��ܺ�
	fill         ����  �����������Ԫ��
*/

//���ã����������� ����Ԫ���ۼ��ܺ�
//the function prototype : accumulate(iterator beg, iterator end, value);   value -> ��ʼ���ۼ�ֵ���������Ҫ��д0

void test01() {
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}
	
	int total = accumulate(v.begin(), v.end(), 1000);  //��������������ʼ���ۼ�ֵ
	cout << "total = " << total << endl;

}
int main() {
	test01();


	system("pause");
	return 0;
}