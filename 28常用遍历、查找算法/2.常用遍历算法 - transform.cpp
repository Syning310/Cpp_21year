#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


/*
  ����ԭ�ͣ�
    transform(iterator beg1, iterator end1, iterator beg2, _func);
  beg1 ԭ������ʼ������
  end1 ԭ��������������
  beg2 Ŀ��������ʼ������
  _func ��ͨ�������ߺ������󣨷º�����
*/

class Target {  //transform���˹����ǰ�ÿ�������������÷��뵽�����У�Ȼ�����Ŀ������
public:
	int operator()(int val) {
		return val;  //ֱ��return�Ǿ��ǲ����κβ���
	}
};
class Myprint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};
void test01() {
	vector<int> v1;
	v1.push_back(1); v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);

	vector<int> vTarget;  //Ŀ������
	vTarget.resize(v1.size());    //�м�һ����Ҫ��ǰ���ٿռ�

	//transform(iterator beg1, iterator end1, iterator beg2, _func);
	transform(v1.begin(), v1.end(), vTarget.begin(), Target());

	for_each(vTarget.begin(), vTarget.end(), Myprint());
	cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}