#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���������ϲ������Ҵ��浽��һ��������
//����ԭ�ͣ�  merge(iterator beg1, iterator end1, iterator beg2, iterator end2,iterator dest);  dest ΪĿ��������ʼ������
//ע�⣺������������������ģ�����Ŀ��������Ҫ��ǰ���ٿռ�
//beg1 Ϊ��һ��������ʼ��������end1 Ϊ��һ������������������beg2 Ϊ�ڶ���������ʼ��������end2 Ϊ�ڶ�����������������

void myprint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v1;
	vector<int> v2;
	v1.push_back(1); v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);
	v2.push_back(1); v2.push_back(2); v2.push_back(3); v2.push_back(4); v2.push_back(5); v2.push_back(6);
	vector<int> v3;
	int space = v1.size() + v2.size();
	v3.resize(space);    //Ŀ������������ǰ����space

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());  
	for_each(v3.begin(), v3.end(), myprint); cout << endl;    //�����������У��ϲ�֮����Ȼ��һ����������

	random_shuffle(v3.begin(), v3.end());
	for_each(v3.begin(), v3.end(), myprint); cout << endl;
}
int main() {
	srand((unsigned int)time(NULL));
	test01();

	system("pause");
	return 0;
}