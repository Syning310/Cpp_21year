#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���ã��������ڵ�Ԫ�ؽ��з�ת
//����ԭ�ͣ�  reverse(iterator beg, iterator end);


void myprint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(2); v.push_back(5); v.push_back(3); v.push_back(1); v.push_back(4);

	cout << "��תǰ�� " << endl;
	for_each(v.begin(), v.end(), myprint); cout << endl;

	cout << "��ת�� " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}