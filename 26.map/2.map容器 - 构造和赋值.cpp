#include<iostream>
using namespace std;
#include<map>

//�ܽ᣺map������Ԫ�ض��ǳɶԳ��֣���������ʱ����ʹ�ö���

//map���루insert�� ��Ҫ������д�������飻������������������insert��map����
//pair    �����飩

/*
  map<T1, T2> mp;                         //mapĬ�Ϲ��캯��
  map(const map& mp);                     //�������캯��

  map& operator=(cosnt map& mp);          //���صȺ������
 
*/
void printmap(map<int, int>& m) {
	for (map<int, int>::iterator i = m.begin(); i != m.end(); i++) {
		cout << "keyֵΪ��  " << i->first << "\tvalueֵΪ��  " << (*i).second << endl;
	}cout << endl;
}
void test01() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));  //(pair)�������Ķ��飬�������󣻰������������insert��map�����У������������д���ִ�н����Զ��ͷ�
	m.insert(pair<int, int>(5, 50));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(2, 20));
	printmap(m);

	//��������
	map<int, int> m2(m);
	printmap(m2);

	//�ȺŸ�ֵ
	map<int, int> m3;
	m3 = m2;
	printmap(m3);

}
int main() {
	test01();


	system("pause");
	return 0;
}