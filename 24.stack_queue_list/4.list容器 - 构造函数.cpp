#include<iostream>
using namespace std;
#include<list>

//�ܽ᣺list���췽ʽ��ͬ��������STL������������һ��

/*
    list<T> lst;                      //list����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
	list(beg, end);                   //���캯����[beg, end]�����е�Ԫ�ؿ���������
	list(n, elem);                    //���캯����n��elem����������
	list(const list& lst);            //�������캯��
*/

void printList(const list<int>& lis) {
	for (list<int>::const_iterator i = lis.begin(); i != lis.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	//1��list<T> lst;                      //list����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
	list<int> l1;
	l1.push_back(10); l1.push_back(20); l1.push_back(30); l1.push_back(40); l1.push_back(50);

	printList(l1);  //��������

	//2��list(beg, end);                   //���캯����[beg, end]�����е�Ԫ�ؿ���������
	list<int>l2(l1.begin(), l1.end());
	printList(l2);

	//3��list(n, elem);                    //���캯����n��elem����������
	list<int> l3(6, 6);
	printList(l3);

	//4��list(const list& lst);            //�������캯��
	list<int> l4(l3);
	printList(l4);
}
int main() {
	test01();


	system("pause");
	return 0;
}