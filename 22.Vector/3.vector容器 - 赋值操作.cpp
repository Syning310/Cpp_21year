#include<iostream>
using namespace std;
#include<vector>

//�ܽ᣺vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operaor=������assign������

/*
  vector& operator=(const vector& vec);             //���صȺŲ�����
  assign(v.beg(), v.end());                         //��[beg, end]�����е����ݿ�����ֵ������
  assign(n, elem);                                  //��n��elem������ֵ������
*/

void printVector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//1��vector& operator=(const vector& vec);             //���صȺŲ�����
	vector<int> v2;
	v2 = v1;   
	printVector(v2);

    //2��assign(v.beg(), v.end());                         //��[beg, end]�����е����ݿ�����ֵ������
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//3��assign(n, elem);                                  //��n��elem������ֵ������
	vector<int> v4;
	v4.assign(6, 6);
	printVector(v4);

}

int main() {
	test01();

	system("pause");
	return 0;
}