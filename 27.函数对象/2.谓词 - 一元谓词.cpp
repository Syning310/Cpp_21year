#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

/*
  ���
    ����bool���͵ķº�����Ϊν��
	���operator()����һ����������ô����һԪν��
	���operator()����������������ô������Ԫν��
*/

class GreaterFive {
public:
	bool operator()(int val) {  //С���������ʱһ����������һԪν�ʣ�����������������Ƕ�Ԫν��
		return val > 5;  //����5��Ϊtrue
	}
};
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	//������������û�д���5������
	vector<int>::iterator i = find_if(v.begin(), v.end(), GreaterFive());  //GreaterFive()����������ĺ���������Ϊǰ��û�д�����һ����������
	//����ҵ��˻᷵����������Ԫ�صĵ�������λ�ã����û���ҵ�����end()������Ҫ�õ�����ȥ����������
	if (i == v.end()) {
		cout << "δ�ҵ�����������Ԫ�أ�����" << endl;
	}
	else {
		cout << "�ҵ��˴���5��Ԫ��Ϊ��  " << *i << endl;
	}

}
int main() {
	test01();

	system("pause");
	return 0;
}