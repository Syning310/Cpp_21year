#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//����ԭ�ͣ�sort(iterator beg, iterator end, _Pred);  //_Pred��ν�ʣ�Ĭ����less ��С���󣻴Ӵ�С�����ڽ��º�����greater<T>()
                                                                                          //һ���ǵü�ģ������б�

class Greater {
public:
	bool operator()(int& v1, int v2)const {
		return v1 > v2;
	}
};
void printVector(int val) {
	cout << val << " ";
}
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(5); v.push_back(4); v.push_back(3); v.push_back(6); v.push_back(7);
	
	cout << "����ǰ��" << endl;
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	cout << "�����" << endl;
	sort(v.begin(), v.end(),greater<int>());  //Ҳ�������Լ�д�ķº�����Greater()
	for_each(v.begin(), v.end(), printVector); cout << endl;
}
int main() {
	test01();

	system("pause");
	return 0;
}