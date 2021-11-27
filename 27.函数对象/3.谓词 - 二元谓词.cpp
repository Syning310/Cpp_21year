#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void PrintVector(const vector<int>& vc) {
	for (vector<int>::const_iterator i = vc.begin(); i != vc.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
class MyCompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(40); v.push_back(30); v.push_back(50); v.push_back(20);
	sort(v.begin(), v.end());  //�����㷨,Ĭ�Ͼ��Ǵ�С
	PrintVector(v);

	//����ʹ�÷º��������ı��㷨��Ĭ������ʽ
	sort(v.begin(), v.end(), MyCompare());  //������������
	PrintVector(v);
}
int main() {
	test01();

	system("pause");
	return 0;
}