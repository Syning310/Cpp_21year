#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//���ã���������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//����ԭ�ͣ�  replace(iterator beg, iterator end, oldvalue, newvalue);

void myPrint(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(20); v.push_back(20); v.push_back(70); v.push_back(30); v.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint); cout << endl;

	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint); cout << endl;


}
int main() {
	test01();
	system("pause");
	return 0;
}