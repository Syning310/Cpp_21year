#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//����������������ǽ�������
//�ܽ᣺������������������У�Ŀ�����������������ȡ�ϴ�ֵ��set_difference����ֵ�ǲ�����һ��Ԫ�ص�λ��
//min ��С    max ���

//function: �������Ĳ�������Եģ�v1��v2֮��Ĳ���������v1��v2�в��ظ���elem��v2��v1֮��Ĳ���������v2��v1�в��ظ���elem

//the function prototype : set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2. iterator dest);

class myprint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	vector<int> traget;//������ǰ���ٿռ䣻��������������������֮��û�в�����Կ��ٿռ�ȡ�������Ǹ�����ΪĿ�������Ŀռ�
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 4);
	}
	cout << "��ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myprint()); cout << endl;
	for_each(v2.begin(), v2.end(), myprint()); cout << endl;

	cout << "v1��v2�Ĳ��" << endl;
	traget.resize(max(v1.size(), v2.size()));  //max()���ص�����������֮������ֵ
	vector<int>::iterator i = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), traget.begin());
	for_each(traget.begin(), i, myprint()); cout << endl;

	cout << "v2��v1�Ĳ��" << endl;
	vector<int> traget2;
	traget2.resize(max(v1.size(), v2.size()));
	vector<int>::iterator e = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), traget2.begin());
	for_each(traget2.begin(), e, myprint()); cout << endl;

}
int main() {

	test01();

	system("pause");
	return 0;
}