#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

//���ã�ϴ�ƣ�ָ����Χ�ڵ�Ԫ�������������
//����ԭ�ͣ�random_shuffle(iterator beg, iterator end);  

void print(int val) {
		cout << val << " ";
	}

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6); v.push_back(7);

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), print); cout << endl;

}
int main() {
	//���Լ�����������ӣ�����ÿ��ϴ�ƺ�������ͬ
	srand((unsigned int)time(NULL));
	test01();


	system("pause");
	return 0;
}