#include<iostream>
using namespace std;
#include<set>

//find(key);                         //����key�Ƿ���ڣ������ڣ����ظ�Ԫ�صĵ��������������ڣ�����set.end();
//count(key);                        //ͳ��key��Ԫ�ظ����� count��ͳ�ƣ�������
//��Ϊset���ܲ����ظ������ݣ�����count����set���ԣ���������0������1����������multiset�����������ÿ������������

void test01() {
	set<int> s;
	s.insert(1); s.insert(5); s.insert(7); s.insert(6); s.insert(2); s.insert(4); s.insert(3);
	
	set<int>::iterator p = s.find(3);
	if (p != s.end()) {
		cout << "�ɹ��ҵ�Ԫ�أ�  " << *p << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ�أ�" << endl;
	}

	cout << s.count(10) << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}