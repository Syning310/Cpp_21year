#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//����ԭ�ͣ�  adjacent_find(iterator beg, iterator end);
//���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��������

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(4);

	vector<int>::iterator i = adjacent_find(v.begin(), v.end());
	if (i == v.end()) {
		cout << "δ�ҵ������ظ���Ԫ��" << endl;
	}
	else {
		cout << *i << endl;
	}

}
int main() {
	test01();
	system("pause");
	return 0;
}