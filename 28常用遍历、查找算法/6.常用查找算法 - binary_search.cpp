#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
/*
  ���ܣ� ����ָ��Ԫ���Ƿ���ڣ��鵽����true��δ�鵽����false
  ����ԭ�ͣ�bool binary_search(iterator beg, iterator end, value);
  ע�⣺������������в���ʹ��
*/

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	bool ret = binary_search(v.begin(), v.end(), 19);  //�������������һ����������У�������δ֪�����ң�
	if (ret) {
		cout << "�ҵ�Ԫ��" << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}
int main() {
	test01();

	system("pause");
	return 0;
}