#include<iostream>
using namespace std;
#include<list>

//�ܽ᣺���в�֧��������ʵ��������������������ñ�׼�㷨��
//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨����Ա������

//reverse();    //��ת�����������е�Ԫ�ط�ת
//sort();       //�������򣻽������е����ݽ�������Ĭ����������С�������򣻽���Ҫд��Ա����

bool myCompare(int v1, int v2) {
	//�������   ��һ���� > �ڶ�����
	return v1 > v2;  //�����һ�������ڵڶ��������ͷ���true�������һ���������ڵڶ��������ͷ���false
}

void printlist(const list<int>& l) {
	for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	list<int> l1;
	l1.push_back(1); l1.push_back(2); l1.push_back(3); l1.push_back(4); l1.push_back(5);
	printlist(l1);
	//reverse();    //��ת�����������е�Ԫ�ط�ת
	l1.reverse();
	printlist(l1);

	list<int> p;
	p.push_back(10); p.push_back(3); p.push_back(1); p.push_back(5); p.push_back(6);
	p.push_back(2); p.push_back(8); p.push_back(7); p.push_back(4); p.push_back(9);
	printlist(p);

	//sort();       //�������򣻽������е����ݽ�������
	p.sort(myCompare);
	printlist(p);
}

int main() {
	test01();

	system("pause");
	return 0;
}