#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//�ܽ᣺Ŀ��������Ҫ���ٵĿռ�Ϊ�����������
//set_union����ֵ�ǲ��������һ��elem��λ��

//ע�⣺����������������������
//function: ������������Ĳ���

//����Ϊ���������в��ظ���elem + (�ظ���Ԫ��ֻ��һ��)�����ǲ���

//the function prototype : set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);

class myprint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 1; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 4);
	}
	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myprint()); cout << endl;
	for_each(v2.begin(), v2.end(), myprint()); cout << endl;

	cout << "the conmity of v1 and v2 :" << endl;
	vector<int> traget;  //������ǰ���ٿռ䣻�����������Ĳ���������������������������֮��û���κβ��������Կ��ٿռ�Ϊ�����������
	traget.resize(v1.size() + v2.size());  //�������������ڴ�ռ���ӣ���Ϊ�����������ǣ���������֮��û���κβ���

	vector<int>::iterator i = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), traget.begin());
	for_each(traget.begin(), i, myprint()); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}