#include<iostream>
using namespace std;
#include<set>



/*
  size();                            //����������Ԫ�صĸ���
  empty();                           //�ж������Ƿ�Ϊ�գ�Ϊ�յĻ�����true����Ϊ�յĻ�����false
  swap(st);                          //����������������
 */

void printSet(const set<int>& s) {
	for (set<int>::const_iterator i = s.begin(); i != s.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	s1.insert(1); s1.insert(4); s1.insert(5); s1.insert(6); s1.insert(2); s1.insert(3); s1.insert(7);
	printSet(s1);

	//1.size();                            //����������Ԫ�صĸ���
	cout << "s1�Ĵ�СΪ��  " << s1.size() << endl;

	//2.empty();                           //�ж������Ƿ�Ϊ�գ�Ϊ�յĻ�����true����Ϊ�յĻ�����false
	if (!s1.empty()) {
		cout << "s1������Ϊ�գ�����" << endl;
	}
	else {
		cout << "s1����Ϊ�գ�����" << endl;
	}

	set<int> s2;
	s2.insert(11); s2.insert(14); s2.insert(15); s2.insert(16); s2.insert(12); s2.insert(13); s2.insert(17);
	printSet(s2);

	//3��swap(st);                          //����������������
	s1.swap(s2);
	cout << "������" << endl;
	printSet(s1);
	printSet(s2);


}
int main() {
	test01();

	system("pause");
	return 0;
}