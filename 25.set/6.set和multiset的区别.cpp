#include<iostream>
using namespace std;
#include<set>

//�ܽ᣺�������������ظ����ݿ�������set
//      �����Ҫ�����ظ����ݿ�������multiset

/*
  ����
	set�����ϣ������Բ����ظ����ݣ���multiset���๦�ܼ��ϣ�
    set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
	multiset���������ݣ���˿��Բ����ظ�����
*/

void test01() {
	set<int> s;
	
	pair<set<int>::iterator, bool> ret = s.insert(10);
	
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	
	ret = s.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}

	//multiset���Բ�������ظ����ݣ��������ݷ��ؽ����һ��������
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator i = ms.begin(); i != ms.end(); i++) {
		cout << *i << " ";
	}cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}