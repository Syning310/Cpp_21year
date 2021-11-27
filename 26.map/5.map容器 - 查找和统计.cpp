#include<iostream>
using namespace std;
#include<map>

/*
  find(key);                           //����key�Ƿ���ڣ������ڣ����ؼ���Ԫ�صĵ��������������ڣ�����set.end();
  count(key);                          //ͳ��key��Ԫ�ظ���������map��˵ֻ��һ��key����Ϊmap����������ظ���key
  map����������ظ�keyֵ��Ԫ�أ������������ظ�keyֵ��Ԫ�أ���岻��ȥ
*/

void test01() {
	map<int, int> p;
	p.insert(make_pair(1, 10));
	p.insert(make_pair(3, 30));
	p.insert(make_pair(2, 20));
	p.insert(make_pair(5, 50));
	p.insert(make_pair(4, 40));

	//find(key);                           //����key�Ƿ���ڣ������ڣ����ؼ���Ԫ�صĵ��������������ڣ�����set.end();
	map<int, int>::iterator i = p.find(2);
	if (i != p.end()) {
		cout << "value = "<< i->second << endl;
	}
	else {
        cout << "δ�ҵ���keyֵ" << endl;
	}

	

	//count(key);                          //ͳ��key��Ԫ�ظ���������map��˵ֻ��һ��key����Ϊmap����������ظ���key
	int a = p.count(2);
	cout << a << endl;

	multimap<int, int> mp;
	mp.insert(make_pair(1, 100));
	mp.insert(make_pair(1, 200));
	mp.insert(make_pair(1, 300));
	mp.insert(make_pair(1, 400));
	mp.insert(make_pair(1, 500));
	for (multimap<int, int>::iterator i = mp.begin(); i != mp.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
	int q = mp.count(1);
	cout << "multimap��keyֵΪ1���У� " << q << "��" << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}