#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//�ܽ᣺����fill���Խ�����������Ԫ�����Ϊָ����ֵ

//fill  ���
//the function prototype : fill(iterator beg, iterator end, value);  value -> ����ֵ

void MyPrint(int value) {
	cout << value << " ";
}
void test01() {
	vector<int> v;
	v.resize(10);  //ʮ��0

	//�������
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), MyPrint); cout << endl;
}
int main() {
	test01();

	system("pause");
	return 0;
}