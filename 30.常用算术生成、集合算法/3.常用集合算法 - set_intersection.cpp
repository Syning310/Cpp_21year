#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//ע�⣺����������������������
//intersection����ֵ�ǽ���elem�е����һ��elem��λ��

/*
  �����㷨��
    set_intersection               //�����������Ľ���  ����  �������������������ظ���elem
	set_union                      //�����������Ĳ���  ����  �����������������в��ظ���elem + (�ظ���elemֻ��һ��)
	set_difference                 //�����������Ĳ  ����  �����Եģ���v1��v2�Ĳ���õ�����v1��v2�в��ظ���elem���ظ���ȥ��
	                                                                       ��v2��v1�Ĳ���õ�����v2��v1�в��ظ���elem���ظ���ȥ��
*/

//the function prototype : set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);


class MyPrint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 3);
	}
	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), MyPrint()); cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint()); cout << endl;


	vector<int> Target;  //Ŀ������;��Ҫ��ǰ���ٿռ䣬��������������������������һ������������һ������������elem
	                     //���Կ�����С�������Ŀռ伴��
	Target.resize(min(v1.size(), v2.size()));  //min()���ص���ȡ��С��ֵ

	//gets the intersection
	vector<int>::iterator i = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), Target.begin());

	cout << "v1��v2�Ľ����У�" << endl;
	for_each(Target.begin(),i, MyPrint()); cout << endl;  
	//��Ϊresize���ܻ���չ������Ŀռ䣬������Ŀռ�����elemΪ0�����Ա���ʱ�Ľ���������Ҫ�� i��
	//iָ��������������Ľ����е����һ��elem
  
}
int main() {
	test01();

	system("pause");
	return 0;
}