#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���ã�������ָ����Χ��Ԫ�ؿ�������һ������
//����ԭ�ͣ�  copy(iterator beg, iterator end, iterator dest);  //destĿ����������ʼ������

void myprint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6);
	
	vector<int> v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myprint); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}