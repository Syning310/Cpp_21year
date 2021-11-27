#include<iostream>
using namespace std;
#include<set>



/*
  insert(elem);                               //�������в���Ԫ��
  clear();                                    //�������Ԫ��
  erase(pos);                                 //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
  erase(beg, end);                            //ɾ��[beg, end]���������Ԫ�أ�������һ��������
  erase(elem);                                //ɾ��������ֵΪelem��Ԫ��
*/

void printSet(set<int>& s) {
	for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	//insert(elem);                               //�������в���Ԫ��
	s1.insert(4); s1.insert(2); s1.insert(5); s1.insert(3); s1.insert(1); s1.insert(6);
	printSet(s1);

	//erase(pos);                                 //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
	s1.erase(s1.begin());
	printSet(s1);

	//erase(elem);                                //ɾ��������ֵΪelem��Ԫ��
	s1.erase(6);
	printSet(s1);

	//clear();                                    //�������Ԫ��
	s1.clear();
	printSet(s1);
}
int main() {
	test01();


	system("pause");
	return 0;
}