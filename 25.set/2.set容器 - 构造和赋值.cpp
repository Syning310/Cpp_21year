#include<iostream>
using namespace std;
#include<set>

/*
  set<T> st;                        //Ĭ�Ϲ��캯��
  set(const set& st);               //�������캯��

  set& operator=(const set& st);    //���صȺ������
*/

void printSet(const set<int>& st) {
	for (set<int>::const_iterator i = st.begin(); i != st.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	//setֻ����insert��ʽ�������ݣ�������Զ������Ҳ��������ظ�����,������ظ����ݻ��Զ�ɾ����
	s1.insert(5); s1.insert(2); s1.insert(3); s1.insert(1); s1.insert(4); s1.insert(5); s1.insert(5);
	printSet(s1);
	
	//set(const set & st);               //�������캯��
	set<int> s2(s1);
	printSet(s2);

	//set& operator=(const set& st);    //���صȺ������
	set<int>s3;
	s3 = s2;
	printSet(s3);
	cout << s1.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}