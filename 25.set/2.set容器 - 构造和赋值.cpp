#include<iostream>
using namespace std;
#include<set>

/*
  set<T> st;                        //默认构造函数
  set(const set& st);               //拷贝构造函数

  set& operator=(const set& st);    //重载等号运算符
*/

void printSet(const set<int>& st) {
	for (set<int>::const_iterator i = st.begin(); i != st.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	set<int> s1;
	//set只允许insert方式插入数据；插入后自动排序且不允许有重复数据,如果是重复数据会自动删除；
	s1.insert(5); s1.insert(2); s1.insert(3); s1.insert(1); s1.insert(4); s1.insert(5); s1.insert(5);
	printSet(s1);
	
	//set(const set & st);               //拷贝构造函数
	set<int> s2(s1);
	printSet(s2);

	//set& operator=(const set& st);    //重载等号运算符
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