#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

/*
  template<typename T> bool equal_to<T>            //����
  template<typename T> bool not_equal_to<T>        //������
  template<typename T> bool greater<T>             //����
  template<typename T> bool greater_equal<T>       //���ڵ���
  template<typename T> bool less<T>                //С��
  template<typename T> bool less_equal<T>          //С�ڵ���

  ��ϵ�º�������õĵ���  greater<T>()
*/

class Compare {
public:
	bool operator()(int v1, int v2) const{
		return v1 > v2;
	}
};
void test01() {
	vector<int> v;
	v.push_back(10); v.push_back(40); v.push_back(50); v.push_back(20); v.push_back(30);
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//sort(v.begin(), v.end());  //Ĭ�ϴ�С������Ϊ����ĵ���������Ĭ�ϵ���less<T>()
	//sort(v.begin(), v.end(), Compare());  //���ǿ����Լ�дһ�����ڵķº���
	sort(v.begin(), v.end(), greater<int>());  //greater<T>()��STL�ṩ���ڽ��������󣬺��Լ�д��compareЧ��һ��

	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
int main() {
	test01();

	system("pause");
}